#include<stdio.h>

int main(){
    int marks[5] = {90, 85, 76, 88, 92};

    for (int i=0; i<5; i++){
        printf("Student %d: %d\n", i+1, marks[i]);
    }
    return 0;
}
