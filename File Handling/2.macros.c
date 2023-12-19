#include<stdio.h>
#define PI 3.15159265359  //shortcut PI for define function
#define area(r) (PI*r*r)  //shortcut define for area function

/*float area(float r)
return PI*r*r;*/

int main()
{
    /*double x = 3.14159265359;
    printf("%.18f\n", PI);*/

    printf("%f", area(15));

    return 0;
}
