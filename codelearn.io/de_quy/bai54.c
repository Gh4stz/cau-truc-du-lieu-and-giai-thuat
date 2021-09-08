#include<stdio.h>

int ucln(int a, int b){
    if(b == 0) return a;
    if(a % b == 0) return b;
    return ucln(b,a % b);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",ucln(a,b));
    return 0;
}