#include<stdio.h>
#include<stdlib.h>

struct Linkedlist{
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
node addhead(node head, int value){
    node temp;
    temp = createnode(value);
    if(head == NULL){
        head = temp;
    }else{
        temp -> next = head;
        head = temp;
    }
    return head;
}//tail: đuôi
node addtail(node head, int value){
    node p, temp;
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
    }
    return head;
}
//convert : chuyen doi
node convert(node head, int a, int b){
    node p = head;
    while(p != NULL){
        if(p -> data == a){
            p -> data = b;
        }p = p-> next;
    }
    return head;
}
void print(node head){
    node p = head;
    for(p = head; p != NULL; p = p -> next){
        printf("%d ",p -> data);
    }
}
int main(){
    int n, i;
    scanf("%d",&n);
    node head = NULL;
    for(i = 0;i < n;i++){
        int value;
        scanf("%d",&value);
        head = addtail(head, value);
    }
    int a, b;
    scanf("%d%d",&a,&b);
    head = convert(head, a, b);
    print(head);
    return 0;
}