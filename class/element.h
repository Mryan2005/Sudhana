#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char *itemName;
    double price;
    double cost;
    double deltaCost;
    char *note;
    char *cycle;
    char *tags[20];
} item;

typedef struct {
    double price;
    double cost;
    double deltaCost;
    int mode;    // 0: with Tags, 1: not with tags
    int frequency;   // 0: every day, 1: every week, 2: every month, 3: every year
} CostCount;

char *createACharSpace(const int canEmpty) {
    char *str = (char*)malloc(sizeof(char)*1024);
    gets(str);
    if(canEmpty && str[0] == 0) {
        return NULL;
    } else {
        while(str[0] == 0) {
            gets(str);
        }
    }
    return str;
}

item createAItemFromInput() {
    item temp;
    printf("请输入消费的物品的名称: ");
    temp.itemName = createACharSpace(0);
    printf("请输入原价: ");
    scanf("%lf", &temp.price);
    printf("请输入实际花费: ");
    scanf("%lf", &temp.cost);
    temp.deltaCost = temp.price - temp.cost;
    printf("请输入要写入的记录: ");
    temp.note = createACharSpace(0);
    temp.cycle = NULL;
    for(int i = 0; i < 20; i++) temp.tags[i] = NULL;
    return temp;
}

item createAItemFromFile(item Temp) {
    return Temp;
}