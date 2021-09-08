#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int enqueue(int queue[], int *back, int *p, int a){
    (*p)++;
    queue = (int *)realloc(queue, (*p) * sizeof(int));
    queue[*back] = a;
    (*back)++;
}
int pop(int *front){
    (*front)++;
}
int main(){
    int n, i, j;
    scanf("%d",&n);
    int a[n];
    int *massage, front = 0, back = 1, p = 1;
    massage = (int *)malloc(p * sizeof(int));
    bool dk = false;
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int k;
    scanf("%d",&k);
    massage[0] = a[0]; 
    for(i = 1;i < n;i++){
        if(p < k){ 
            dk = false;
            for(j = 0;j < i;j++){
                if(a[i] == a[j]) dk = true;
            }
            if(dk == false){
                enqueue(massage, &back, &p, a[i]);
            }
        }
        else if(p >= k){
            dk = false;
            for(j = p - k;j < p;j++){
                if(a[i] == massage[j]) dk = true;
            }
            if(dk == false){
                enqueue(massage, &back, &p, a[i]);
                pop(&front);
            }
        }
    }
        for(i = front;i < back;i++){
            printf("%d ",massage[i]);
        }
        free(massage);
        return 0;
}
