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
        temp -> left = NULL;
        temp -> right = NULL;
        temp -> data = x;
        return temp;
    }else{
        if(t -> data > x){
            t -> left = add(t -> left,x);
        }else{
            t -> right = add(t -> right,x);
        }
    }
}
int leafnode(node t){
    if(t == NULL) return 0;
    if(t -> right == NULL && t -> left == NULL) return 1;
    return leafnode(t  -> left) + leafnode(t -> right);
}
int main(){
    int n,i;
    scanf("%d",&n);
    node t = NULL;
    for( i = 0;i < n;i++){
        int k;
        scanf("%d",&k);
        t = add(t,k);
    }
    printf("%d",leafnode(t));
    return 0;
}