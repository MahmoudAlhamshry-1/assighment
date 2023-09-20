#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);
#define pi 3.1415
#define area(r)(pi*(r)*(r))

int main() {
	int r;float area;
	setbuf(stdout,NULL);
	printf("enter the radius :");
	scanf("%d",&r);
	area =area(r);
	printf("area is %f",area);




	return 0;
}
