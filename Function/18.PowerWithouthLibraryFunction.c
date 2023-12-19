#include<stdio.h>
int main(){
    double base, exponent, result=1;

    printf("Enter Base: ");
    scanf("%lf", &base);

    printf("Enter Exponent: ");
    scanf("%lf", &exponent);

    for(double i=1; i<=exponent; i++){
        result = result * base;
    }
    printf("The power is: %lf\n", result);

return 0;
}
