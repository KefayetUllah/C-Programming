//Print sum from 1 to n. (return type).
#include<stdio.h>
int sum(int n){
    if(n==1 || n==0) return;
    int recAns = n+sum(n-1);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int fact = sum(n);
    printf("%d", fact);
return 0;
}

