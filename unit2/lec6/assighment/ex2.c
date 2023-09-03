#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);

long int f_num(int n);

int main() {
	int n;
	setbuf(stdout,NULL);
	printf("Enter an positive number :");
	scanf("%d",&n);
	printf("factorial of %d is %ld ",n,f_num(n));


    return 0;
}
	long int f_num(int n)
	{
		if(n>1)
		{
			return n*f_num(n-1);
		}
		else
			return 1;
	}
