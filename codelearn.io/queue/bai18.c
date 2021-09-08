#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>

int snt(int n){
    if(n < 2){
        return 1;
    }
    int i;
    for(i = 2;i <= sqrt(n);i++){
        if(n % i == 0){
            return 1;
        }
    }return 0;
}
void enqueue(int a, int queue[], int *back, int *j){
    (*j)++;
    queue = (int *)realloc(queue, (*j) * sizeof(int));
    queue[*back] = a;
    (*back)++;
}

int Front(int queue[], int front){
    return queue[front];
}void pop(int *front){
    (*front)++;
}
    
bool IsEmpty(int front, int back){
    return (front == back);
}
int main(){
    int n, j = 0, back = 0, front = 0;
    int i;
    scanf("%d",&n);
    //tim cac so nguyen to tu 1 chu so tu 1 toi n
    int *queue;
    queue = (int *)malloc(j * sizeof(int));
    for(i = 2;i < n,i < 10;i++){
        if(snt(i) == 0){
            enqueue(i, queue, &back, &j);
        }
    }
    while(!IsEmpty(front, back)){
        for(i = 1;i <= 9;i++){
            int k = (Front(queue, front)) * 10 + i;
            if(k <= n && snt(k) == 0){
                enqueue(k, queue, &back, &j);
            }else if(k > n){
                break;
            }
        }
        printf("%d ",Front(queue, front));
        pop(&front);
    }
    free(queue);
    return 0;
}