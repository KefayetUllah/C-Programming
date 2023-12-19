#include<stdio.h>
int main(){
    double base, exponent, result;

    printf("Enter Base: ");
    scanf("%lf", &base);

    printf("Enter Exponent: ");
    scanf("%lf", &exponent);

    result = pow(base, exponent);
    printf("%lf", result);

return 0;
}
