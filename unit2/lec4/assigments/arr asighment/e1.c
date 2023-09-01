#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);

int main() {
  int a[2][2];

  int b[2][2];
  int sum[2][2];

  printf("enter elements of first matrix :");
  setbuf(stdout,NULL);

  for(int i=0 ;i<2;i++)
  {
	  for (int x=0;x<2;x++)
	  {
		  printf("\n enter a%d%d:",i,x);
		  scanf("%d",&a[i][x]);
	  }
  }

  printf("enter elements of second matrix :");
    setbuf(stdout,NULL);

    for(int i=0 ;i<2;i++)
    {
  	  for (int x=0;x<2;x++)
  	  {
  		  printf("\n enter b%d%d:",i,x);
  		  scanf("%d",&b[i][x]);
  	  }
    }

    //get the sum
    for(int i=0 ;i<2;i++)
        {
      	  for (int x=0;x<2;x++)
      	  {
      		  sum[i][x]=a[i][x]+b[i][x];
      	  }
        }


    //print the sum
    printf("Sum of matrix:\n");
    for(int i=0 ;i<2;i++)
        {
      	  for (int x=0;x<2;x++)
      	  {
      		  printf("%d  ",sum[i][x]);

      	  }
      	  printf("\n");
        }
    return 0;
}
