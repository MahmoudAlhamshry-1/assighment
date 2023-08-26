#include <stdio.h>
#include <stdlib.h>


int main()
{
    int A;
    setbuf(stdout,NULL);

    printf("Enter the number A: ");
    scanf("%d", &A);

    if (A > 0)
        printf("%d is positive.", A);
    else if (A < 0)
        printf("%d is negative.", A);
    else if (A == 0)
        printf("%d is zero.", A);

    return 0;
}
