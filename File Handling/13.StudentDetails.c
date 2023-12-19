#include<stdio.h>
int main()
{
    FILE* file;
    char name[20];
    int age;
    int phonenumber;
    int studentsnumber;

    file = fopen("studentdetails.txt", "a");

    if(file == NULL)
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is Opened\n");
        printf("Enter Number of Students: ");
        scanf("%d", &studentsnumber);

        for(int i=1; i<=studentsnumber; i++)
        {
            printf("Enter Student Name: ");
            scanf("%s", &name);

            printf("Enter Age: ");
            scanf("%d", &age);

            printf("Enter Students Phone Number: ");
            scanf("%d", &phonenumber);

            fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phonenumber);
        }
        fclose(file);
    }
    getc;
}
