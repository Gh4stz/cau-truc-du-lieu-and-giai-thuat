#include<stdio.h>

int game(long long n){
    if(n == 1) return 1;
    return 1 + game(n - (n+1)/2);
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%d",game(n));
    return 0;
}