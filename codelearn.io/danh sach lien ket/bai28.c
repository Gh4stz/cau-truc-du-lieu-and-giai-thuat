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
node addhead(node head, int data){
    node temp = create(data);
    temp -> next = head;
    head = temp;
    return head;
}
node addtail(node head, int data){
    node p , temp;
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
node addat(node head, int position, int data){
    node p, temp;
    temp = create(data);
    if(position == 0 || head == NULL){
        head = addhead(head, data);
    }else{
        int k  = 1;
        node p = head;
        while(p != NULL && k != position){
            p = p -> next;
            k++;
        }
        temp -> next = p -> next;
        p -> next = temp;
    }
    return head;
}
void print(node head){
    node p;
    for(p = head; p != NULL;p = p -> next){
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
    int position, data;
    scanf("%d%d",&position, &data);
    head = addat(head, position, data);
    print(head);
    return 0;
}