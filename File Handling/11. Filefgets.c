#include<stdio.h>
int main()
{
    FILE *file;
    char ch[40];

    file = fopen("test.txt", "r");
    if(file=='\0')
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is Open\n");

        while(!feof(file))
        {
            fgets(ch, 39, file);
            printf("%s\n", ch);
        }

        fclose(file);
    }
    getch();
}


