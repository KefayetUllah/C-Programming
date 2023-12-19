#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct date
    {
        int day;
        int month;
        int year;
    } date;
    date a,b;

    a.day = 5;
    a.month = 1;
    a.year = 1999;

    b.day = 15;
    b.month = 12;
    b.year = 1998;

    bool flag = true;
    if(a.day!=b.day) flag = false;
    if(a.month!=b.month) flag = false;
    if(a.year!=b.year) flag = false;

    if(flag==true) printf("The dates are same");
    else printf("The dates are different");
    return 0;
}
