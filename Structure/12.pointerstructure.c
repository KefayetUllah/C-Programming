#include<stdio.h>
#include<string.h>
#include<stdbool.h>
typedef struct Pokemon
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
} Pokemon;

int main()
{
    Pokemon pikachu;

    pikachu.hp = 60;
    pikachu.speed = 70;
    pikachu.tier = 100;
    strcpy(pikachu.name,"Pikachu");

    Pokemon* x = &pikachu;

    printf("%p\n", &pikachu.hp);
    printf("%p\n", &pikachu.speed);
    printf("%p\n", &pikachu.attack);
    printf("%p\n", &pikachu.tier);
    printf("%p\n\n", &pikachu.name);

    printf("%p\n", x);
    return 0;
}
