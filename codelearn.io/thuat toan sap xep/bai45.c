#include<stdio.h>
//thuat toan sap xep sellsort
void sellsort(int a[], int n){
    int i, j, interval;
    for(interval = n / 2;interval > 0;interval = interval / 2){
        for(i = interval;i < n;i++){
            int temp = a[i];
            for(j = i;j >= interval && a[j - interval] > temp;j -= interval){
                a[j] = a[j - interval];
            }
            a[j] = temp;
        }
    }
}
void output(int a[], int n){
    int i;
    printf("Mang sau khi duoc sap xep la: \n");
    for(i = 0;i < n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int n, i;
    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap vao cac phan tu trong mang:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    sellsort(a, n);
    output(a, n);
    return 0;
}