#include<stdio.h>
int sum(int a, int b)
{

    return a+b;
}
int main()
{
    int sum1, sum2;
    printf("Enter two number: ");
    scanf("%d %d", &sum1, &sum2);

    int result = sum(sum1, sum2);
    printf("The Summation is: %d\n", result);
    return 0;
}
