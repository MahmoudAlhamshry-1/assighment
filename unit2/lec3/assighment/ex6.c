#include <stdio.h>
#include <stdlib.h>


int main(){
	int a,b,t;

	setbuf(stdout,NULL);
	printf("Enter value of a: ");
	scanf("%d",&a);
	printf("Enter value of b: ");
	scanf("%d",&b);
	t =a ;
	a= b;
	b = t;
	printf("\nAfter swapping, value of a = %d",a);
	printf("\nAfter swapping, value of b = %d",b);

	return 0;

}
