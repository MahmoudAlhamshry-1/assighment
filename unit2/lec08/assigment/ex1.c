#include "stdio.h"

int main(){
    int m=29;
    printf("Address of m : %p\nValue of m : %d\n",&m,m);
    int *ab=&m;
    printf("Address of pointer ab : %p \nContent of pointer ab : %d\n",ab,*ab);
    printf("The value of m assigned to 34 now\n");
    m=34;
    printf("Address of pointer ab : %p \nContent of pointer ab : %d\n",ab,*ab);
    printf("The pointer variable ab is assigned with the value 7 now\n");
    *ab=7;
    printf("Address of m : %p\nValue of m : %d\n",&m,m);




}