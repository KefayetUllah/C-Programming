#include<stdio.h>
int main()
{
    FILE *file;
    char firstname[20];
    char lastname[20];
    int age;

    file = fopen("test.txt", "r");
    if(file=='\0')
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is Open\n");

        fscanf(file, "%s %s %d", &firstname, &lastname, &age);
        printf("%s %s %d\n", firstname, lastname, age);

        fclose(file);
    }
    getch();
}
