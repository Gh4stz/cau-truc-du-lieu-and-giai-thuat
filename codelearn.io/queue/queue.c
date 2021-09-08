#include<stdio.h>

int enqueue(int n, int queue[], int rear){
    queue[rear] = n;
    rear++;
}
int dequeue(int front, int queue[]){
    queue[front] = '\0';
}
int front(int queue[], int front){
    return queue[front];
}
int main(){
    int front = 0, rear = 0;
    
}