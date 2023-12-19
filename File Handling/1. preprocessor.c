#include<stdio.h>
#include<math.h>
#include<limits.h>
int main(){
    int x = INT_MAX; //-2147483648 to 2147483647
    int y = INT_MIN;
    long z = LONG_MAX;
    long z1 = LONG_MIN;

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%d\n", z1);
return 0;
}
