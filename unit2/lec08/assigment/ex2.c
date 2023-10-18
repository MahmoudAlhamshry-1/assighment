#include "stdio.h"

int main(){
    char a[27];
    char* p=a;
    int i;
    for (i=0;i<26;i++){
        *p=i+'A';
        printf("%c\t",*p);
        p++;

    }
}