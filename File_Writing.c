#include<stdio.h>
int main(){
    FILE *fptr = fopen("Output.txt", "w");

    if (fptr == NULL){
        printf("Error opening file!\n");
        return 1;
    }
    fprintf(fptr, "Hello, File!\n");
    fclose(fptr);

    return 0;
}
