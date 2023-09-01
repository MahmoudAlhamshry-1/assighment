#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);

int main() {
	int x[10];int n,sum=0;
	double avg;
	setbuf(stdout,NULL);
	fflush(stdin);fflush(stdout);
	here:
	printf("enter number of data : ");
	scanf("%d",&n);
	if(n<100)
	{
		for (int i=0;i<n;i++)
		{
			printf("Enter number : ");
			scanf("%d",&x[i]);
			sum +=x[i];

		}
		avg = (float)sum/n;
		printf("Average : %f",avg);
	}
	else
	{printf("you enterd large number \n");
	goto here;
	}


    return 0;
}
