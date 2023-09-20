#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//setbuf(stdout,NULL);
//fflush(stdin);fflush(stdout);

struct Students{
	char name[50];
	int roll;
	int marks;

};
int main() {
	struct Students student[10];
	setbuf(stdout,NULL);
	for(int i=0;i<10;++i){
		printf("for Roll number %d",student[i].roll=i+1);
		printf("\nEnter name : ");
		scanf("%s",student[i].name);
		printf("Enter Marks :");
		scanf("%d",&student[i].marks);

	}

	printf("displaying information :");
	for(int i=0;i<10;++i){
			printf("\nfor Roll number %d",student[i].roll);
			printf("\n Name : %s",student[i].name);
			printf("\n Marks : %d",student[i].marks);


		}
}
