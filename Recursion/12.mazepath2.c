#include<stdio.h>
int maze2(int n, int m){   //cr=current columns, ec=end columns
    int rightways = 0;
    int downways = 0;
    if(n==1 && m==1) return 1;
    if(n==1){  //cannot go down
        rightways += maze2(n,m-1);
    }
    if(m==1){  // cannot go right
        downways += maze2(n-1,m);
    }
    if(n>1 && m>1){
        rightways += maze2(n,m-1);
        downways += maze2(n-1,m);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    int n;
    printf("Enter no of rows of the maze: ");
    scanf("%d", &n);
    int m;
    printf("Enter no of columns of the maze: ");
    scanf("%d", &m);
    int noOfways = maze2(n,m);
    printf("%d", noOfways);
return 0;
}

