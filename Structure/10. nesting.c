#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main()
{
    typedef struct Pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];
    } Pokemon;

    typedef struct SuperPokemon
    {
        Pokemon normal;
        char ability[10];
    } SuperPokemon;

    typedef struct GodPokemon
    {
        SuperPokemon Super;
        int specialattack;
    } GodPokemon;

    GodPokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.Super.ability, "Turn into stone");
    arceus.Super.normal.attack = 500;

    SuperPokemon mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.normal.hp = 150;
    mewtwo.normal.attack = 180;
    mewtwo.normal.speed = 160;
    strcpy(mewtwo.normal.name, "Mewtwo");
    mewtwo.normal.tier = 'S';
    return 0;
}
