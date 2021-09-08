#include<stdio.h>
int count = 0;
int conver(int n, int k){
    if(k == 0){
        count ++;
    }else{
        conver(2*n,k-1);
        if((n-1) % 3 == 0 && ((n-1)/3)%2 == 1){
            conver((n-1)/3,k-1);
        }
    }
    return count;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);
    printf("%d",conver(n,k));
    return 0;
}