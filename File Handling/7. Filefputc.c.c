#include<stdio.h>
int main()
{
    FILE *file;
    char name[25] = "Kefayet Ullah";
    int length = strlen(name);

    file = fopen("test.txt", "a");
    if(file=='\0') //\0 -> NULL     //Statement
    {
        printf("File doesn't exist");
    }
    else
    {
        printf("File is Open\n");
        for(int i=0; i<length; i++){   //Loop Condition
            fputc(name[i], file);
        }
        printf("File is written succesfully\n");
        fclose(file);
    }
    getch();
}

