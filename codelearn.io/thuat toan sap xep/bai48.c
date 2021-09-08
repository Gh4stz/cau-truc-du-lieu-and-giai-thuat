#include<stdio.h>


void swap(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}
int pivot(int a[], int l, int h){
    int pivot = a[h];
    int right = h - 1;
    int left = l;
    while(1){
        while(left <= right && a[left] < pivot) left++;
        while(left <= right && a[right] > pivot) right--;
        if(left >= right) break;
        swap(&a[left], &a[right]);
        left++;
    } 
    swap(&a[left], &a[h]);
    return left;
}
int quicksort(int a[], int l, int h){
    if(l < h){
        int p = pivot(a, l, h);
        quicksort(a, l, p - 1);
        quicksort(a, p + 1, h);
    }
}
void output(int a[], int n){
    int i ;
    int count = 1;
    printf("Cac phan tu va so lan xuat hien la: \n");
    for(i = 1;i < n;i++){
        if(a[i ] == a[i - 1]) count++;
        else{
            printf("%d %d; ",a[i-1], count);
            count = 1;
        }
    }
    printf("%d %d; ",a[n -1], count);
}
int main(){
    int n, i;
    printf("Nhap vao so phan tu trong mang: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap vao cac phan tu trong mang: \n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    quicksort(a, 0, n-1);
    output(a, n);
    return 0;
}