#include<stdio.h>
int Maximum(int x[])
{
    int max = x[0];
    for(int i=1; i<5; i++)
    {
        if(max<x[i])
        max = x[i];
    }
    return max;
}
int main()
{
    int num[] = {10,20,30,40,50};
    int Maximumvalue = Maximum(num);

    printf("%d\n", Maximumvalue);

    return 0;
}
