#include <stdio.h>
#include <stdlib.h>


int main(){
	float x,y;
	printf("Enter two numbers:  ");
	fflush(stdout);
	scanf("%f",&x);
	scanf("%f",&y);
	printf("Product:  %f",x*y);
	return 0;
}
