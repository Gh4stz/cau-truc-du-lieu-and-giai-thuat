//thuat toan sap xep noi bot
#include<stdio.h>
#include<stdbool.h>
bool bublesort(int a[], int n){
    int i, j;
    for(i = 0;i < n - 1;i++){
        bool swap = false;
        for(j = 0;j < n - i - 1;j++){
            if(a[j] > a[j + 1]){
                int c = a[j];
                a[j] = a[j + 1];
                a[j + 1] = c;
                swap = true;
                return false;
            }
        }if(swap == false){
            return true;
        }
    }
}
void print(int a[], int n){
    int i;
    printf("Mang sau khi duoc sap xep la: \n");
    for(i = 0;i < n;i++){
        printf("%d ",a[i]);
    }
}
int main(){
    int n, i, j=0;
   printf("Nhap vao so phan tu trong mang: ");
    scanf("%d",&n);
    int a[n];
    printf("Nhap vao cac phan tu trong mang:\n");
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    printf("%4d:",j);
        print(a,n);
        printf("\n");
        j++;
        while(1){
            if(selectionsort(a,n) == false){
                printf("%4d:",j);
                print(a,n);
                printf("\n");
            }else   break;
            j++;
        }
        return 0;
    return 0;
}