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
	struct Students student;
	setbuf(stdout,NULL);
	printf("Enter name : ");
	scanf("%s",student.name);
	printf("Enter Roll number :");
	scanf("%d",&student.roll);
	printf("Enter Marks :");
	scanf("%d",&student.marks);
	printf("Displaying information :");
	printf("\nname is : %s",student.name);
	printf("\nroll number is : %d",student.roll);
	printf("\nmarks is : %d",student.marks);




    return 0;
}

