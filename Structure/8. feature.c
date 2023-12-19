#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } pokemon;
    pokemon a, b, c;

    a.attack = 100;
    a.hp = 100;
    a.speed = 90;
    a.tier = 'A';
    strcpy(a.name,"Blastoise");

    /*b.attack = 300;
    b.hp = 200;
    b.speed = 80;
    b.tier = 'B';
    strcpy(b.name, a.name);*/

    b=a;

    strcpy(b.name, "Venusaur");

    printf("%s\n",b.name);
    printf("%d\n",b.attack);
    printf("%d\n",b.speed);
    printf("%c",b.tier);
    return 0;
}

