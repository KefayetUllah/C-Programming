#include<stdio.h>
int main()
{
    int a; //Operand
    scanf("%d", &a);
    char ch; // '+', '-', '*', '/' -> operator
    scanf("%c",&ch);
    int b;
    scanf("%d", &b);

    /*(if(ch=='+')         //if statement for calculator
        printf("%d", a+b);
    if(ch=='-')
        printf("%d", a-b);
    if(ch=='*')
        printf("%d", a*b);
    if(ch=='/')
        printf("%f",(float)a/b);*/

    switch(ch)     //switch statement for calculator
    {
    case '+':
        printf("%d", a+b);
        break;
    case '-':
        printf("%d", a-b);
        break;
    case '*':
        printf("%d", a*b);
        break;
    case '/':
        printf("%f", (float)a/b);
        break;

    }
    return 0;
}
