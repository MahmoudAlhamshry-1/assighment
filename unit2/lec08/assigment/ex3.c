#include "stdio.h"
#include "string.h"

int main(){
    char s[50],rs[50];char *p1,*p2;
    setbuf(stdout,NULL);
    printf("enter string : \n");
    scanf("%s",s);
    p1=s;
    int l =strlen(s);

    for (int i=0;i<l-1;i++)
    {
    	p1++;

    }
    for (int i=l-1;i>=0;i--)
       {
    	printf("%c",*p1);
       	p1--;


       }
//    printf("%c",*p1);


    return 0;

}