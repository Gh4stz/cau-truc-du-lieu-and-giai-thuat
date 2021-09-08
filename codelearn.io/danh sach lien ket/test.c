#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct sv{
    char name[30];
};
typedef struct sv *node;
int main(){
    node p;
    p = (node)malloc(2 * sizeof(struct sv));
    strcpy((p + 1) -> name, "Hoan");
    strcpy((p + 0) -> name, "HOAN");
    printf("%s\n",(p + 0) -> name);
    printf("%s",(p + 1) -> name);
    return 0;
}