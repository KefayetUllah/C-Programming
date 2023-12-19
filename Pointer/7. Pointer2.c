#include<stdio.h>
int main(){
    int x = 10, y = 20, z = 30;
    int *ptr;

    ptr = &x;
    printf("Value of x: %d\n", *ptr);
    printf("Address of x: %p\n", *ptr);

    ptr = &y;
    printf("Value of y: %d\n", *ptr);
    printf("Address of y: %p\n", *ptr);

    ptr = &z;
    printf("Value of z: %d\n", *ptr);
    printf("Address of z: %p\n", *ptr);

getc;
}
