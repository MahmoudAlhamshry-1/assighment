#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);
int main() {
	int arr[10][10];
	int trans[10][10];
	int r,c;
	setbuf(stdout,NULL);
	fflush(stdin);fflush(stdout);
	printf("enter number of rows and coulmn :");
	scanf("%d",&r);
	scanf("%d",&c);
	printf("enter elements of matrix :\n");
	for (int i=0 ;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("Enter elements %d%d : ",i,j);
			scanf("%d",&arr[i][j]);
		}
	}
	printf("\nEntered matrix: \n");
	  for (int i = 0; i < r; ++i)
	  for (int j = 0; j < c; ++j) {
	    printf("%d  ", arr[i][j]);
	    if (j == c - 1)
	    printf("\n");
	  }

	  for (int i = 0; i < r; ++i)
	    for (int j = 0; j < c; ++j) {
	      trans[j][i] = arr[i][j];
	    }


	    printf("\nTranspose of the matrix:\n");
	    for (int i = 0; i < c; ++i)
	    for (int j = 0; j < r; ++j) {
	      printf("%d  ", trans[i][j]);
	      if (j == r - 1)
	      printf("\n");
	    }


    return 0;
}
