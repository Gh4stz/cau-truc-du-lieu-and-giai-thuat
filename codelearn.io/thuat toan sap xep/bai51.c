#include<stdio.h>
#include<stdlib.h>
void quicksort(int a[], int l, int r){
    int p = a[(l + r)/2];
    int left = l;
    int right = r;
    while(left < right){
        while(p > a[left])
            left++;
        while (p < a[right])
            right--;
        if(left <= right){
            int c = a[left];
            a[left] = a[right];
            a[right] = c;
            left++;
            right--;
        }
    }
    if(left < r){
        quicksort(a,left,r);
    }if(right > l){
        quicksort(a,l,right);
    }
}
void add(int a[],int b[],int n){
    int i;
    int k=0;
    for(i = n-1;i >= 0;i--){
        if(a[i] < 0){
            a[i] = b[k];
            k++;
        }
    }
    for(i = 0;i < n;i++){
        if(a[i] > 0){
            a[i] = b[k];
            k++;
        }
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    int *a;
    a = (int*)malloc(n * sizeof(int));
    int b[n],k=0;
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
        if(a[i] != 0){
            b[k] = a[i];
            k++;
        }
    }
    quicksort(b,0,k-1);
    add(a,b,n);
    for(i = 0;i < n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}