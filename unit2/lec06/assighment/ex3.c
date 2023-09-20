#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);

typedef struct Complex{

	float R;
	float J;

}complex;

complex add(complex d1,complex d2);
int main() {
	struct Complex d1,d2,temp;

	setbuf(stdout,NULL);
	printf("for 1st comlex number :");
	printf("\nenter Real and Imaginary respectively :");
	scanf("%f%f",&d1.R,&d2.J);

	printf("for 2nd comlex number :");
    printf("\nenter Real and Imaginary respectively :");
	scanf("%f%f",&d2.R,&d2.J);
	temp=add(d1,d2);
	printf("%f +j %f",temp.R,temp.J);



    return 0;
}
complex add(complex d1,complex d2){
	complex temp;
	temp.R=d1.R+d2.R;
	temp.J=d1.J+d2.J;
	return temp;
}

