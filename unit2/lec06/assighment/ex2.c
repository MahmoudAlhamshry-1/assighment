#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);

struct Dis{

	int feet;
	float inch;

}d1,d2,sum;
int main() {

	setbuf(stdout,NULL);
	printf("Enter 1st distance\n");
	printf("Enter feet: ");
	scanf("%d", &d1.feet);
	printf("Enter inch: ");
	scanf("%f", &d1.inch);
	printf("\nEnter 2nd distance\n");
	printf("Enter feet: ");
	scanf("%d", &d2.feet);
    printf("Enter inch: ");
	scanf("%f", &d2.inch);
	sum.feet=d2.feet+d1.feet;
	sum.inch=d1.inch+d2.inch;
	printf("sum of distances :%d - %f",sum.feet,sum.inch);




    return 0;
}
