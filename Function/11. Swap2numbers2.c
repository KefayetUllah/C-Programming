//Pass by Value
#include<stdio.h>
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
return;
}
int main(){
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

    int b;
    printf("Enter a Number: ");
    scanf("%d", &b);

    //swap(a,b); //pass by value
    a = a+b;
    b = a-b;
    a = a-b;

    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d", b);

return 0;
}
