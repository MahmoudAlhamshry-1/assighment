#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);

int check_prime(int number);

int main() {
	int a,b,flag,i;
	setbuf(stdout,NULL);
	fflush(stdin);fflush(stdout);
	printf("Enter two numbers(intervals) :");
	scanf("%d%d",&a,&b);
	for( i=a+1;i<b;i++){
		flag=check_prime(i);
		if(flag ==0)
		{
			printf("%d \n",i);
		}
	}

    return 0;
}
int check_prime(int number)
{
	int j,flag=0;
	for(j=2;j<number/2;j++)
		if(number%j==0)
		{
			flag =1;
			break;

		}
	return flag;
	}
