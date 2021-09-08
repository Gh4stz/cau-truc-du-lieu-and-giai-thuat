#include<stdio.h>

int tang(int *p){
    (*p)++;
}
int main(){
    int n;
    scanf("%d",&n);
    tang(&n);
    printf("%d",n);
    return 0;
}