#include<stdio.h>

int merge(int a[], int l, int m, int r){
    int i, j, k = l;
    int n1 = m - l +1;
    int n2 = r - m;
    int L[n1], R[n2];
    for(i = 0;i < n1;i++){
        L[i] = a[l + i];
    }
    for(j = 0;j < n2;j++){
        R[j] = a[m + 1 + j];
    }
    i = 0;
    j = 0;
    while (i < n1 && j < n2)
    {
        a[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    }
    while(i < n1){
        a[k++] = L[i++];
    }
    while(j <  n2){
        a[k++] = R[j++];
    }
}
void mergesort(int a[], int l, int r){
    if(l < r){
        int m = l + (r - l) / 2;
        mergesort(a, l, m);
        mergesort(a, m + 1, r);
        merge(a, l, m, r);
    }
}
int solve(int a[], int n, int k){
    int i;
    int temp = 1;
    for(i = 1;i < n;i++){
        if(a[i] - a[i-1] >k ) temp++;
    }
    return temp;
}
int main(){
    int n, i;
    printf("Nhap vao so phan tu cua mang: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap vao cac phan tu cua mang:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    mergesort(a, 0, n-1);
    int k;
    printf("Nhap vao khoang cach toi da co the tiep xuc: ");
    scanf("%d",&k);
    printf("%d", solve(a, n, k));
    return 0;
}