#include<stdio.h>
int main()
{
    int num;
    printf("Enter a integer number: ");
    scanf("%d", &num);

    int result = Square(num);
    printf("The Square is: %d\n", result);
    return 0;
}
int Square (int a)
{
    return a*a;
}
