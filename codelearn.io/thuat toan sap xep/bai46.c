#include<stdio.h>
//thuat toan sap xep quicksort
void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int partion(int a[], int l, int h){
    int pivot = a[h];
    int left = l;
    int right = h - 1;
    while(1){
        while(right >= left && a[left] < pivot) left ++;
        while(right >= left && a[right] > pivot) right --;
        if(left >= right) break;
        swap(&a[left], &a[right]);
        left++;
    }
    swap(&a[left], &a[h]);
    return left;
}
void quicksort(int a[], int l, int h){
    if(l < h){
        int pivot = partion(a, l, h);
        quicksort(a, l, pivot - 1);
        quicksort(a, pivot + 1, h);
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
    quicksort(a, 0, n - 1);
    output(a, n);
    return 0;
}