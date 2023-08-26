#include <stdio.h>
#include <stdlib.h>


int main(){
	char a;
	setbuf(stdout,NULL);
	printf("enter the alphabet :");
	scanf("%c",&a);
	if (a=='a' || a=='e' || a =='i' || a=='o' || a=='u'){
		printf("%c is vowel ",a);
	}
	else {
		printf("%c is consonant ",a);

	}

	return 0;

}
