#include<stdio.h>

int Binsearch(int a[], int l, int r, int x){
    while(r >= l){
        int mid = (l + r) / 2;
        if(a[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    if(a[l] == x){
        return l;
    }
    return -1;
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
    int x;
    printf("Nhap vao gia tri can tim: ");
    scanf("%d",&x);
    printf("%d", Binsearch(a, 0, n - 1, x));
    return 0;

}