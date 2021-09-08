#include<stdio.h>
#include<stdlib.h>
#define Max 100
struct Linkedlist {
    int data;
    struct Linkedlist *next;
};
typedef struct Linkedlist *node;

node createnode(node head, int value){
    node temp;
    temp = (node)malloc(sizeof(struct Linkedlist));
    temp -> next = NULL;
    temp -> data = value;
    return temp;
}
node addtail(node head, int value){
    node p, temp;
    temp = createnode(head, value);
    if(head == NULL){
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
node dehaed(node head){
    head = head -> next;
    return head;
}
node detail(node head){
    if(head == NULL || head -> next == NULL){
        return dehaed(head);
    }node p = head;
    while(p -> next -> next != NULL){
        p = p -> next;
    }
    p -> next = NULL;
    return head;
}
node deat(node head, int position){
    if(position == 0 || head == NULL || head -> next == NULL){
        head = dehaed(head);
    }else{
        int k = 1;
        node p = head;
        while(p -> next -> next != NULL && k != position){
            p = p -> next;
            k++;
        }
        if(k != position){
            // Nếu duyệt hết danh sách lk rồi mà vẫn chưa đến vị trí cần chèn, ta sẽ mặc định xóa cuối
            // Nếu bạn không muốn xóa, hãy thông báo vị trí xóa không hợp lệ
            head = detail(head);
            // printf("Vi tri xoa vuot qua vi tri cuoi cung!\n");
        }else{
            p->next = p->next->next;
        }
    }
    return head;
}
int big(node head, int position){
    node p = head;
    int k = 0;
    while(k != position){
        p = p -> next;
        k++;
    }
    return p -> data;
}
node delbig(node head, int value){
    node p = head;
    int k = 0;
    while(p != NULL){
        if(p -> data > value){
            head = deat(head, k);
            p = p -> next; 
        }else{
            p = p -> next;
            k++;
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
    int position, k;
    scanf("%d",&position);
    k = big(head, position);
    head = delbig(head, k);
    print(head);
    return 0;
}
