#include<stdio.h>
int top = -1;
bool IsFull(int capacity){
    if(top >= capacity) {
        return true;
    }
    else{
        return false;
    }
}bool IsEmpty(){
    if(top == -1){
         return true;
    }
    else{
        return false;
    }
}void Push(int stack[], int value, int capacity){
    if(IsFull(capacity) == true){
        printf("Stack da day khong the them phan tu");
    }else{
        top ++;
        stack[top] = value;
    }
}void Pop(){
    if(IsEmpty() == true) 
        printf("Stack nay rong");
    else 
        top--;
}int size(){
    return top + 1;
}
int Top(int stack[]){
    return stack[top];
}
int main(){
    int capacity;
    scanf("%d",&capacity);
    int stack[capacity];
    int  a;
    scanf("%d",&a);
    Push(stack,a,capacity);
    printf("%d",Top(stack));
    return 0;

}