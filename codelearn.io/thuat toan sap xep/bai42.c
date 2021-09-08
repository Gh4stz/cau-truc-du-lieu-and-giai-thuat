#include<stdio.h>
#include<stdbool.h>
//thuat toan sap xep chen
bool insertionsort(int a[], int n){
    int i, key, j;
    for(i = 0;i < n;i++){
        key = a[i];
        j = i-1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        if(a[j+1] != key){
            a[j+1] = key;
            return false;
        } 
    }
    return true;
}
void print(int a[], int n){
    int i;
    for(i = 0;i < n;i++){
        printf("%4d ",a[i]);
    }
}
int main(){
    int n, i;
    scanf("%d",&n);
    int a[n];
    int j = 0;
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    printf("%4d:",j);
    print(a,n);
    printf("\n");
    j++;
    while(1){
        if(insertionsort(a,n) == false){
            printf("%4d:",j);
            print(a,n);
            printf("\n");
        }else   break;
        j++;
    }
}