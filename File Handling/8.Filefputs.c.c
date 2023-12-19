#include<stdio.h>
int main()
{
    FILE *file;
    char name[25];

    file = fopen("test.txt", "w");
    if(file=='\0') //\0 -> NULL     //Statement
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is Open\n");
        printf("Enter your Full Name: ");
        gets(name);

        fputs(name, file);
        printf("File is written successfully\n");
        fclose(file);
    }
    getch();
}

