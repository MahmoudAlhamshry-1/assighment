#include <stdio.h>
#include <stdlib.h>


int main(){
	int a;
	setbuf(stdout,NULL);
	printf("enter the number :");
	scanf("%d",&a);
	if (a%2 == 0 ){
		printf("number is even");
	}
	else {
		printf("number is odd");

	}

	return 0;

}
