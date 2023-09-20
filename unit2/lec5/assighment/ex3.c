#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);


void reverse(char *c);
int main() {
    printf("Enter a sentence: ");
    setbuf(stdout,NULL);
    char c[100];
    gets(c);
    reverse(c);
    return 0;
}

void reverse(char *c) {

    if (*c != '\0') {
        reverse(c+1);
        printf("%c", *c);
    }
}
