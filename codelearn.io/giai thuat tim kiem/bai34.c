#include<stdio.h>

int search(int s[], int value, int n){
    int i, k = 0;
    for(i = 0;i < n;i++){
        if(s[i] == value)
            k++;
    }
    return k;
}
int main(){
    int n, i;
    scanf("%d",&n);
    int s[n];
    for(i = 0;i < n;i++){
        scanf("%d",&s[i]);
    }
    int k;
    scanf("%d",&k);
    printf("%d",search(s, k, n));
    return 0;
}