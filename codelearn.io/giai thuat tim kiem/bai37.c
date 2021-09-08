#include<stdio.h>
#include<stdbool.h>
int binsearch(int a[], int n, int x){
    int l = 0;
    int r = n - 1;
    while(r >= l){
        int mid = (l + r) / 2;
        if(a[mid] < x){
            l = mid + 1;
        }else{
            r = mid - 1;
        }
    }
    if(a[l] == x){
        return l;
    }
    return -1;
}
void print(int a[], int l, int r){
    int i;
    for(i = l; i <= r; i++){
        printf("%d ",a[i]);
    }
}
bool Solve(int a[], int b[], int n, int s){
    b[0] = a[0];
    int i;
    for(i = 1;i < n;i++){
        b[i] = b[i - 1] + a[i];
    }
    for(i = 0;i < n;i++){
        if(b[i] == s){
            print(a, 0, i);
            return true;
        }
        if(b[i] > s){
            int l = binsearch(b, n, b[i] - s);
            if(l != -1){
                print(a, l + 1, i);
                return true;
            }
        }
    }
}
int main(){
    int n, i;
    scanf("%d",&n);
    int a[n];
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }
    int x;
    scanf("%d",&x);
    int b[n];
    bool dk = Solve(a, b, n, x);
    if(dk != true)
        printf("-1");
    return 0;
}