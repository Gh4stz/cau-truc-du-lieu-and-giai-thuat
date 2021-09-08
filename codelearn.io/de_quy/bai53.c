#include<stdio.h>

long long mu(int a,int b){
    if(b == 1) return a;
    return a * mu(a,b-1);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%lld",mu(a,b));
    return 0;
}