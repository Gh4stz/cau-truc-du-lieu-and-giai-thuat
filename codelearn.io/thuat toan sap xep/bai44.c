#include<stdio.h>
//thuat toan sap xep tron
void merge(int a[], int l, int m, int r){
    int i, j, k = l;
    int n1 = m - l + 1;
    int n2 = r - m ;
    int L[n1], R[n2];
    for(i = 0;i < n1;i++){
        L[i] = a[l + i];
    }
    for(j = 0;j < n2;j++){
        R[j] = a[m + j + 1];
    }
    i = 0;
    j = 0;
    while(i < n1 && j < n2){
        a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++]; // toan tu ba ngoi
    }
    while(i < n1){
        a[k++] = L[i++];
    }
    while(j < n2){
        a[k++] = R[j++];
    }
}
void mergesort(int a[], int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
        mergesort(a, m + 1, r);
        mergesort(a, l, m);
        merge(a, l, m, r);
    }
}
void output(int a[], int n){
    int i;
    printf("Mang sau khi duoc sap xep la:\n");
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
        scanf("%d",&a[i]);;
    }
    mergesort(a, 0, n -1);
    output(a, n);
    return 0;
}