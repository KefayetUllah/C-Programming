#include<stdio.h>
#include<string.h>
int main(){
    struct book{
    char name[50];
    float price;
    int noofpages;
    } a, b, c;

    strcpy(a.name,"Secret Seven");
    a.price = 411.5;
    a.noofpages = 100;

    strcpy(b.name,"Famous Five");
    b.price = 100;
    b.noofpages = 200;

    printf("%s\n", a.name);
    printf("%f\n", a.price);
    printf("%d\n\n", a.noofpages);

    printf("%s\n", b.name);
    printf("%f\n", b.price);
    printf("%d\n", b.noofpages);



return 0;
}
