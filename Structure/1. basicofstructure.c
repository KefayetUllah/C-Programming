#include<stdio.h>
int main(){
    struct pokemon{  //user define data type
        int hp;
        int speed;
        int attack;
        char tier;
    };
    struct pokemon pikachu;
    pikachu.attack = 60;
    pikachu.hp = 50;
    pikachu.speed = 100;
    pikachu.tier = 'A';

    printf("%d\n", pikachu.attack);
    printf("%c\n", pikachu.tier);

    struct pokemon charizard;
    charizard.attack = 130;
    charizard.hp = 80;
    charizard.speed = 80;
    charizard.tier = 'S';

    printf("%d\n", charizard.hp);
    printf("%c", charizard.tier);

return 0;
}
