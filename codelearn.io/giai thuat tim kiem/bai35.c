#include<stdio.h>
#include<stdbool.h>
int main(){
    int n, i;
    scanf("%d",&n);
    int a[n];
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    bool dk = false;
    for(i = 0;i < n;i++){
        if(a[i] % 2 != 0){
            if(i % 2 == 0){
                printf("%d ",a[i]);
                dk = true; 
            }
        }
    }
    if(dk == false){
        printf("NULL");
    }
    return 0;
}