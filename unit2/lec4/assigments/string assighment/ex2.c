#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);


int main() {
	 char Str[1000];
	    int i;
	    setbuf(stdout,NULL);

	    printf("Enter the String: ");
	    scanf("%s", Str);

	    for (i = 0; Str[i] != '\0'; ++i);

	    printf("Length of Str is %d", i);

	    return 0;

	 return 0;
}