#include<stdio.h>
int main(){
    int a = 5;
    int* x =&a;  //int* -> int ka address store karta hain
   //vvip -> *x = 7; //a is changed

    int** y = &x; //int** -> int* ka address store karta hain

    printf("Value of a: %d\n", a);  //%p se address print hota hain
    printf("Address of a: %d\n", &a);
    printf("Address of a: %d\n",x);
    printf("Address of x: %d\n",&x);
    printf("Content of **y: %d\n", **y);
    printf("Address of *x: %p\n", &x);
    printf("Address of x: %p\n", x);
return 0;
}
