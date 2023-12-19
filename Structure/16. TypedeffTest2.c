#include<stdio.h>
struct book
{
    char name[20];
    int price;
};
int main()
{
    typedef struct book BOOK;

    BOOK b = {"Amar JibonKotha", 350};

    printf("Book Name: %s\n", b.name);
    printf("Book Price: %d",b.price);

    getc;
}
