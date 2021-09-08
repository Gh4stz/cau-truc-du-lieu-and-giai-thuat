#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
    int data;
    struct tree *left;
    struct tree *right;
} *node;
node add(node t, int x){
    if(t == NULL){
        node temp = (node)malloc(sizeof(struct tree));
        temp -> data = x;
        temp -> left = NULL;
        temp -> right = NULL;
        return temp;
    }else{
        if(x > t -> data){
            t -> right = add(t -> right, x);
        }else{
            t -> left = add(t -> left,x);
        }
    }
}
void output(node t){
    if(t != NULL){
        output(t -> left);
        printf("%d ",t -> data);
        output(t -> right);
    }
}
int main(){
    int n,i;
    scanf("%d",&n);
    node t = NULL;
    for(i = 0;i < n;i++){
        int k;
        scanf("%d",&k);
        t = add(t,k);
    }
    output(t);
    return 0;
}