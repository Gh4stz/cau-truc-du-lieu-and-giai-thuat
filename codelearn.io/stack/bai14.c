#include<stdio.h>
int top = -1;
int Push(int stack[],int value){
    top++;
    stack[top] = value;
}void Pop(){
    top--;
}int Top(int stack[]){
    return stack[top];
}int size(){
    return top + 1; 
}
int main(){
    int n, i;
    int stack[100];
    printf("Nhap vao so n: ");
    scanf("%d",&n);
    while(n > 0){
        Push(stack,n % 2);
        n = n / 2;
    }int t = size();
    printf("Hệ nhị phân của %d là: ",n);
    for( i = 0;i < t;i++){
        printf("%d",Top(stack));
        Pop();
    }return 0;
}