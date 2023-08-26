#include <stdio.h>
#include <stdlib.h>
//setbuf(stdout,NULL);

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    setbuf(stdout,NULL);

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}
