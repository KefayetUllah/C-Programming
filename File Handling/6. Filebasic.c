#include<stdio.h>
int main(){
    FILE *file;

    file = fopen("test.txt", "w");
    if(file=='\0') //\0 -> NULL
        {
            printf("File doesn't exist");
        }
    else
    {
        printf("File is Open");
        fclose(file);
    }
getch();
}
