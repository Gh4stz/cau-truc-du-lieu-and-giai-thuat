#include<stdio.h>
#include<stdbool.h>
#include<math.h>
//tim so chinh phuong trong mang
void quicksort(int a[], int l, int r){
    int p = a[(l + r)/2];
    int left = l;
    int right = r;
    while(left < right){
        while(a[left] < p)
            left++;
        while(a[right] > p)
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
bool so_chinh_phuong(int n){
    int a = (int)sqrt(n);
    return a * a == n; 
}
void output(int a[], int n){
    int i;
    if(n == 0){
        printf("NULL");
    }
    else{
        printf("%d ",a[0]);
        for(i = 1;i < n;i++){
            if(a[i] != a[i-1]) printf("%d ",a[i]);
        }
    }
}
int main(){
    int n,i,k=0;
    scanf("%d",&n);
    int a[n];
    int b[100001];
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
        if(so_chinh_phuong(a[i])){
            b[k] = a[i];
            k++;
        }
    }
    quicksort(b,0,k-1);
    output(b,k);
    return 0;
}