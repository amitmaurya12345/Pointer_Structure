#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct pokemon
{
    int hp;
    int attack;
    int speed;
    char tier;
    char name[15];
} pokemon;

void change(pokemon *p)
{
    // p->hp=80; (*x).something=x->something
    (*p).hp=80;
    
    (*p).attack=110;
    (*p).speed=150;
    (*p).tier='S';
    strcpy((*p).name,"Raichu");
    return;
}
int main()
{
    // pokemon pikachu={60,70,100,'A',"Pikachu"};
    pokemon pikachu={60,70,100};
    // pikachu.hp = 60;
    // pikachu.attack=70;
    // pikachu.speed=100;
    pikachu.tier='A';
    strcpy(pikachu.name,"Pikachu");
    // int* x -> address of integer value
    pokemon *a = &pikachu;
    // printf("%d\n",pikachu.hp);
    // printf("%d\n\n",pikachu.attack);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%s\n\n", pikachu.name);
    // printf("%p\n\n", &pikachu.name);

    change(&pikachu);

    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attack);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%s\n", pikachu.name);
    // printf("%p\n\n", &pikachu.name);

    // printf("%p",a);
    // (*a).hp=70;
    // (*a).attack=80;
    // printf("%d\n",pikachu.hp);
    // printf("%d\n",pikachu.attack);

    return 0;
}