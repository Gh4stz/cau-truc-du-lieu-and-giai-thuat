//giai thuat tim kiem noi suy
#include<stdio.h>

int interpolationSearch(int a[], int n, int x){
    int l = 0, r = n - 1;
    while(a[l] != a[r] && x >= a[l] && x <= a[r]){
        int mid = l + (r - l)*(x - a[l]) / (a[r] - a[l]);
        if(a[mid] < x){
            l = mid + 1;        
        }
        else if(a[mid] > x){
            r = mid - 1;
        }else{
            if(mid > 0 && a[mid - 1] == x){
                r = mid - 1;
            }else{
                return mid;
            }
        }
    }
    if(a[l] == x){
        return l;
    }
    return -1;
}
int main(){
    int n, i;
    printf("Nhap vao so luong phan tu trong mang: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap vao cac phan tu trong mang:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    printf("Nhap vao phan tu can tim vi tri: ");
    scanf("%d",&x);
    printf("Vi tri xuat hien dau tien cau %d la: %d",x,interpolationSearch(a, n, x));
    return 0;
    
}