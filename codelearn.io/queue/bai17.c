#include<stdio.h>
#include<stdlib.h>
void enqueue(int j, int queue[], int *back, int *n){
    (*n)++;
    queue = (int *)realloc(queue, (*n) * sizeof(int));
    queue[*back] = j;
    (*back)++;
}
void dequeue(int queue[], int *front){
    queue[*front] = 0;
    (*front)++;
}
int Front(int queue[], int front){
    return queue[front];
}

int main(){
    int n, front = 0, *a, i;
    scanf("%d",&n);
    int back = n;
    a = (int *)malloc(n * sizeof(int));
    for( i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    int k;
    scanf("%d",&k);
    while(k > 0){
        int j = Front(a, front);
        enqueue(j, a, &back, &n);
        dequeue(a, &front);
        k--;
    }
    for(i = front;i < back;i++){
        printf("%d ",a[i]);
    }
    free(a);
    return 0;
}