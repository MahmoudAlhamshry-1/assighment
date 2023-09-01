#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);

//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);
int main() {
	int arr[50],i,element,n,sflag=0;
	fflush(stdin);fflush(stdout);
	setbuf(stdout,NULL);
	printf("enter number of elements :");
	scanf("%d",&n);
	printf("enter the elements of array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be searched : ");
	scanf("%d",&element);
	for(i=0;i<n;i++)
	{
		if (arr[i]== element)
		{
			sflag=1;
			break;
		}
	}
	if(sflag == 1){
		printf("elemnt is found at positoin : %d",i);
	}
	else{
		printf("element not found ");
	}





	 return 0;
}
