#include <stdio.h>
#define MAX 7

typedef struct Accounts{
    int id;
    char status[MAX];
    char nickname[MAX];
    int age;
    char house[MAX];
    int number[MAX];
    int money[MAX];
} A;

typedef struct Status{
    int id;
    char name[MAX];
    int all_unlocked;
    int money;
} S;

typedef struct House{
    int id;
    char name[MAX];
    int money;
} H;

void Menu(){
    int respond;

    printf("Hi! Menu:\n");
    printf("1. Account\n");
    printf("2. Work\n");
    printf("3. Market\n");
    printf("4. Support\n");
    printf("Write the number! (1-4)\n");
    scanf("%d", %respond);

    return 0;
}
