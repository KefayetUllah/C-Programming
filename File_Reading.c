#include<stdio.h>
int main(){
    char buffer[100];
    FILE *fptr = fopen("Output.txt", "r");

    if (fptr == NULL){
        printf("File not found!\n");
        return 1;
    }
    while (fgets(buffer, 100, fptr)){
        printf("%s", buffer);
    }
    fclose(fptr);
    return 0;
}
