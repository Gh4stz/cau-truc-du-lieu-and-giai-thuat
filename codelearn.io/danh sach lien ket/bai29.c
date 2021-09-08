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
node dehaed(node head){
    head = head -> next;
    return head;
}
node detail(node head){
    node p;
    if(head == NULL || head -> next == NULL){
        head = dehaed(head);
    }else{
        while(p -> next != NULL){
            p = p -> next;
        }
        p -> next = p -> next -> next;
    }
    return head;
}
node deat(node head, int position){
    node p;
    if(position == 0 || head == NULL || head -> next == NULL){
        head = dehaed(head);
    }else{
        int k = 1;
        p = head;
        while(k != position){
            p = p -> next;
            k++;
        }
        p -> next = p -> next -> next;
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
        int  value;
        scanf("%d",&value);
        head = addtail(head, value);
    }
    int position;
    scanf("%d",&position);
    head = deat(head, position);
    print(head);
    return 0;
}