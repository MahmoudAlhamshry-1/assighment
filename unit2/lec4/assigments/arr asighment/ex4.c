#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);

//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);
int main() {
	  int array[50], position, c, n, value;
	  setbuf(stdout,NULL);
	  fflush(stdin);fflush(stdout);
	    printf("Enter num of elements :\n");
	    scanf("%d", &n);

	    printf("Enter %d elements :\n", n);

	    for (c = 0; c < n; c++)
	        scanf("%d", &array[c]);

	    printf("enter the location : \n");
	    scanf("%d", &position);

	    printf("enter the value :\n");
	    scanf("%d", &value);

	    for (c = n - 1; c >= position - 1; c--)
	        array[c+1] = array[c];

	    array[position-1] = value;

	    printf("\n");

	    for (c = 0; c <= n; c++)
	        printf(" %d  ", array[c]);

	    return 0;
}
