#include<stdio.h>
int main(){
    int x = 5;

    int *ptr;

    ptr = &x;

    printf("Value of x: %d\n", x);
    printf("Address of x: %d\n", &x);
    printf("Value of ptr: %d\n", ptr);
    printf("Value of ptr(x): %d\n", *ptr);
    printf("Address of ptr: %d\n", &ptr);

return 0;
}
