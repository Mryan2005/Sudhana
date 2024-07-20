#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "calculator.h"

typedef struct {
    char *itemName;
    double price;
    double cost;
    double deltaCost;
    char *note;
    char *cycle;
    char *tags[20];
} item;

char *createACharSpace(int canEmpty) {
    char *str = (char*)malloc(sizeof(char)*1024);
    gets(str);
    if(canEmpty) {
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
    temp.itemName = createACharSpace();
    printf("请输入原价: ");
    scanf("%lf", &temp.price);
    printf("请输入实际花费: ");
    scanf("%lf", &temp.cost);
    temp.deltaCost = temp.price - temp.cost;
    printf("请输入要写入的记录: ");
    temp.note = createACharSpace();
    temp.cycle = NULL;
    for(int i = 0; i < 20; i++) temp.tags[i] = NULL;
    return temp;
}

item createAItemFromFile(item Temp) {
    return Temp;
}