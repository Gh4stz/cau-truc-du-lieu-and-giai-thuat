#include<stdio.h>
int top = -1;
char s[100];
void Push(char st[], char c){
    top++;
    st[top] = c;
}void pop(){
    top--;
}int Top(char st[]){
    return st[top];
}
int main(){
    char st[100];
    int i = 0, t = 0;
    gets(s);
    while(s[i] != '\0'){
        t++;
        i++;
    }for(int i = 0;i < t;i++){
        Push(st,s[i]);
    }for(int i = 0;i < t;i++){
        printf("%c",Top(st));
        pop();
    }return 0;
}