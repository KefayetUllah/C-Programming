#include<stdio.h>
double TriangleArea(double a, double h)
{
    return 0.5*a*h;
}
int main()
{
    double base, height;
    printf("Enter Base: ");
    scanf("%lf", &base);

    printf("Enter Height: ");
    scanf("%lf", &height);

    double result = TriangleArea(base, height);
    printf("The TriangleArea is: %lf\n", result);

    return 0;
}
