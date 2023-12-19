#include<stdio.h>
int main(){
    struct student{
    char name[10];
    int roll;
    float result;
    } student1, student2;

    strcpy(student1.name,"Kefayet");
    student1.roll = 40;
    student1.result = 75.5;

    strcpy(student2.name,"Soptok");
    student2.roll = 50;
    student2.result = 30.5;

    printf("%s\n", student1.name);
    printf("%d\n", student1.roll);
    printf("%f\n\n", student1.result);

    printf("%s\n", student2.name);
    printf("%d\n", student2.roll);
    printf("%f\n", student2.result);


return 0;
}
