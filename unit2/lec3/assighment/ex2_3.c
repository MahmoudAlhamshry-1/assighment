#include <stdio.h>
#include <stdlib.h>


int main(){
	int a[3];
	setbuf(stdout,NULL);
	printf("enter three numbers :");
	for(int i=0;i<3;i++){
		scanf("%d",&a[i]);
	}
	if(a[0]>a[1]&& a[0]>a[2] ){
		printf("largest number = %d",a[0]);
	}
	else if(a[1]>a[0]&& a[1]>a[2]){
		printf("largest number = %d",a[1]);
	}
	else if(a[2]>a[0]&& a[2]>a[1]){
			printf("largest number = %d",a[2]);
		}
	return 0;

}
