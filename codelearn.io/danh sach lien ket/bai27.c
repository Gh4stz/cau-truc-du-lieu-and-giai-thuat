#include<stdio.h>
#include<stdlib.h>
struct Linkedlist{
    int data;
    struct Linkedlist *next;
};
typedef struct Linkedlist *node;

node create(int data){
    node temp;
    temp = (node)malloc(sizeof(struct Linkedlist));
    temp -> next = NULL;
    temp -> data = data;
    return temp;
}
node addtail(node head, int data){
    node p, temp;
    temp = create(data);
    if(head == NULL){
        head = temp;
    }
    else{
        p = head;
        while(p -> next != NULL){
            p = p -> next;
        }
        p -> next = temp;
    }
    return head;
}
node addat(node head, int k){
    int i;
    node p = head; 
    for(i = k;i >= 1;i--){
        head = addtail(head, i);
    }
    for(i = 2;i <= k;i++){
        head = addtail(head, i);
    }
    return head;
}
void print(node head){
    node p;
    for(p = head;p != NULL;p = p -> next){
        printf("%d ",p -> data);
    }
}
int main(){
    int n, i;
    scanf("%d",&n);
    node head = NULL;
    head = addat(head, n);
    print(head);
    return 0;
}