#include<stdio.h>

//function decralaretion
int add(int x, int y);

int main(){
    int sum = add(10, 20); //function call
    printf("Sum: %d\n", sum);

    return 0;
}

//function definition
int add(int x, int y){
    return x+y;
}
