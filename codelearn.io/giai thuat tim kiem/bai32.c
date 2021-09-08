#include<stdio.h>

int Search(int s[], int value, int n){
    int i;
    for(i = 0;i < n;i++){
        if(s[i] == value){
            return i;
        }
    }
    return -1;
}
int main(){
    int n, i;
    scanf("%d",&n);
    int s[n];
    for(i = 0; i< n;i++){
        scanf("%d",&s[i]);
    }
    int k;
    scanf("%d",&k);
    printf("%d",Search(s, k, n));
    return 0;
}