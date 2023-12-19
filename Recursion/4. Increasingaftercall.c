#include<stdio.h>
void decreasing(int n){
    if(n==0) return;  //base case
    decreasing(n-1); //call
    printf("%d\n", n); //code
    return;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    decreasing(n);
return 0;
}

