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
    temp -> data = data;
    temp -> next = NULL;
    return temp;
}
node addtail(node head, int data){
    node p, temp;
    temp = create(data);
    if(head == NULL ){
        head = temp;
    }else{
        p = head;
        while(p -> next != NULL){
            p = p -> next;
        }
        p -> next = temp;
    }
    return head;
}
node addnode(node head, int data){
    node p, temp;
    temp = create(data);
    p = head;
    while(p -> next != NULL){
        p = p -> next;
    }
    temp ->  next = head;
    p -> next = temp;
    return head;
}
void print(node head, int position, int n){
    node p = head;
    int i;
    int k = 0;
    while(k != position){
        p = p -> next;
        k++;
    }
    for(i = position;i < position + n;i++){
        printf("%d ",p -> data);
        p = p -> next;
    }
}
int main(){
    int n, i;
    scanf("%d",&n);
    node head = NULL;
    for(i = 0;i < n;i++){
        int value;
        scanf("%d",&value);
        if(i == n - 1){
            head = addnode(head, value);
        }
        else{
            head = addtail(head, value);
        }
    }
    int position;
    scanf("%d",&position);
    print(head, position, n);
    return 0;
}