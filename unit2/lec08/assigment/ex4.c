//setbuf(stdout,NULL);

#include "stdio.h"
#include "string.h"

int main(){
    char s[15], *p1,n;
    setbuf(stdout,NULL);
    printf("Input the number of elements to store in the array (max 15) :\n");
    scanf("%d",&n);

    for (int i=0;i<n;i++){
        printf("Input %d number of elements in the array \n",n);
        printf("element - %d :",i+1);
        scanf("%d",&s[i]);


    }
    p1=s;
    int l =strlen(s);
     for (int x=0;x<l-1;x++)
    {
    	p1++;

    }
    printf("The elements of array in reverse order are :\n");
    for (int x=l-1;x>=0;x--)
       {
    	printf("element - %d :",x+1);
        printf("%d",*p1);
        printf("\n");
       	p1--;


       }

    return 0;

}






    // for (int i=0;i<l-1;i++)
    // {
    // 	p1++;

    // }
    // for (int i=l-1;i>=0;i--)
    //    {
    // 	printf("%c",*p1);
    //    	p1--;


    //    }
//    printf("%c",*p1);

