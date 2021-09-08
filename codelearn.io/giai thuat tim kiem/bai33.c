#include<stdio.h>

void search(int s[], int *pmin, int *pmax, int n){
    int max = s[1];
    int min = s[1];
    int i = 0;
    for(i = 0;i < n;i++){
        if(s[i] >= (max)){
            (max) = s[i];
            (*pmax) = i;
        }if(s[i] < min){
            (min) = s[i];
            (*pmin) = i;
        }
    }
}
void print(int s[], int pmin, int pmax, int n){
    int i;
    int c = s[pmin];
    s[pmin] = s[pmax];
    s[pmax] = c;
    for(i = 0;i < n;i++){
        printf("%d ",s[i]);
    }
}
int main(){
    int n, i;
    scanf("%d",&n);
    int s[n];
    for(i = 0;i < n;i++){
        scanf("%d",&s[i]);
    }
    int pmax, pmin;
    search(s, &pmin, &pmax, n);
    print(s, pmin, pmax, n);
    return 0;
}