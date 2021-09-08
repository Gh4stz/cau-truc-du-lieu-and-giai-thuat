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
node addtail(node head, int value){
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
}node addhead(node head, int value){
    node temp;
    temp = createnode(value);
    if(head == NULL){
        head = temp;
    }
    else{
        temp -> next = head;
        head = temp;
    }
    return head;
}
node dehead(node head){
    head = head -> next;
    return head;
}
node detail(node head){
    if(head == NULL || head -> next == NULL){
        return dehead(head);
    }
    node p = head;
    while(p -> next -> next != NULL){
        p = p -> next;
    }
    p -> next = NULL;
    return head;
}
node deat(node head, int position){
    if(position == 0 || head == NULL || head -> next == NULL){
        head = dehead(head);
    }else{
        int k = 1;
        node p = head;
        while(p -> next -> next != NULL && k != position){
            p = p -> next;
            k++;
        }
        if(k != position){
            head = detail(head);
        }else{
            p -> next = p -> next -> next;
        }
    }
    return head;
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
        head = addtail(head, value);
    }
    int a;
    scanf("%d",&a);
    head = deat(head, a);
    print(head);
    return 0;
}