#include<stdio.h>
enum day_of_week
{
    Sun,Mon,Tue,Wed,Thu,Fri,Sat
};
int main()
{
    enum day_of_week day1, day2;

    day1 = Mon;
    day2 = Wed;

    int diff = day2 - day1;

    printf("day difference = %d\n", diff);
    getc;
}
