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
void fun(Pokemon p)
{
    printf("%d", p.hp);
    return;
}
void change(Pokemon p)
{
    p.hp = 70;
    p.attack = 80;
    p.speed = 90;
}
int main()
{


    Pokemon pikachu;
    pikachu.hp = 50;
    pikachu.attack = 60;
    pikachu.speed = 70;
    change(pikachu);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    //fun(pikachu);

    return 0;
}
