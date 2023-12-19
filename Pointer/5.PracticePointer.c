#include<stdio.h>
int main(){
    int a = 7;
    int* x = &a;

    printf("%p\n", x);
    printf("%p\n", *x);
    printf("%p\n", &x);
    printf("%d\n", a);

return 0;
}
