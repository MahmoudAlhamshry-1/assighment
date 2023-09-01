#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);


int main() {
	    char str[1000], ch,cflag=0;
	    fflush(stdin);fflush(stdout);
	    setbuf(stdout,NULL);

	    printf("Enter a string: ");
	    fgets(str, sizeof(str), stdin);

	    printf("Enter a character to find its frequency: ");
	    scanf("%c", &ch);

	    for (int i = 0; str[i] != '\0'; ++i) {
	        if (ch == str[i])
	            ++cflag;
	    }

	    printf("Frequency of %c = %d", ch, cflag);



	 return 0;
}
