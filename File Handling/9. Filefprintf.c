#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    int age;

    file = fopen("test.txt", "a");
    if(file=='\0') //\0 -> NULL     //Statement
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is Open\n");

       printf("Enter your name: ");
       gets(name);

       printf("Enter your age: ");
       scanf("%d", &age);

       fprintf(file, "Name = %s, Age = %d\n", name, age);

        printf("File is written succesfully\n");
        fclose(file);
    }
    getch();
}


