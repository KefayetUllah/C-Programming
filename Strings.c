#include<stdio.h>
int main(){
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name); //reads string until space

    printf("Hello, %s!\n", name);

    return 0;
}
