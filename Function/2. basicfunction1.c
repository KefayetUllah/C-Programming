#include<stdio.h>
void England(){
    printf("You are in England\n");  //8
return 0; //9
}
void Australia(){
    printf("You are in Australia\n");  //6
    England();  //Calling England  7
return 0;  //10
}
void Bangladesh(){
    printf("You are in Bangladesh\n");  //4
    Australia();  //Calling Australia  5
return 0;   //11
}
void India(){
    printf("You are in India\n"); //2
    Bangladesh();  //Calling Bangladesh  3
return 0;  //12
}
int main(){
    India();  //Calling India 1
return 0;  //13
}
