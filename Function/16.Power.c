#include<stdio.h>
void Power(double base, double exponent)
{
    double result=1, i;
    for(i=1; i<=exponent; i++)
    {
        result = result * base;
    }
    printf("%.1lf\n", result);
}
int main()
{
    double base, exponent;

    printf("Enter Base: ");
    scanf("%lf", &base);

    printf("Enter Exponent: ");
    scanf("%lf", &exponent);

    Power(base, exponent);

    return 0;
}
