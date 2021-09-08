#include<stdio.h>

int giai_thua(int n){
    if(n == 0) return 1;
    return n * giai_thua(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",giai_thua(n));
    return 0;
}