#include "stdio.h"
#include "string.h"


struct Employee{
    char name[50];
    int id;
};
int main(){
    struct Employee emp1={"mahmoud",112},emp2={"kamel",156},emp3={"ali",1556};
    // printf("%s",emp1.name);
    struct Employee (*p[])={&emp1,&emp2,&emp3};
    struct Employee (*(*p1)[])=&p;
    printf("Exmployee Name : %s\n",p[1]->name);
    printf("Employee ID : %d\n",p[1]->id);



    

}