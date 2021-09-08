#include<stdio.h>
#include<string.h>
char s[1000];
char stack[1000];
int top = -1;
int push(char c,char stack[]){
    top++;
    stack[top] = c;
}
int main(){
    char t = 49;
    gets(s);
    for(int i = 0;i < strlen(s);i++){
        if(s[i] == s[i + 1]) {
            t += 1;
        }else {
            push(s[i], stack);
            push(t, stack);
            t = 49;
        }
    }puts(stack);
    return 0;
}