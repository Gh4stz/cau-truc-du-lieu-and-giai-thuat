#include<stdio.h>
#include<stdlib.h>

struct Linkedlist {
    int data;
    struct Linkedlist *next;
};
typedef struct Linkedlist *node;
node createnode(int value){
    node temp;
    temp = (node)malloc(sizeof(struct Linkedlist));
    temp -> data = value;
    temp -> next = NULL;
    return temp;
}
node addnode(node head, int value){
    node temp, p;
    temp = createnode(value);
    if(head == NULL){
        head = temp;
    }
    else{
        p = head;
        while(p -> next != NULL){
            p = p -> next;
        }
        p -> next = temp;
    }return head;
}
void print(node head){
    node p;
    for(p = head; p != NULL; p = p->next){
        printf("%d ", p->data);
    }
}
int main(){
    int n, i;
    scanf("%d",&n);
    node head = NULL;
    for(i = 0;i < n;i++){
        int value;
        scanf("%d",&value);
        head = addnode(head, value);
    }print(head);
    return 0;
}