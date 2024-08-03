#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>
#include "linkList.h"
#include "element.h"

void printItemsTable(linkList *list) {
    Node *temp = list->head;
    printf("序号\t姓名\t性别\t年龄\t电话\n");
    for(int i = 0; i < list->length; i++)
    {
        printf("%d\t%s\t%s\t%d\t%s\n", i + 1, temp->data.itemName, temp->data.price, temp->data.cost, temp->data.note);
        temp = temp->next;
    }
}

void printItemsWithIndex(linkList *list, int index) {
    Node *temp = list->head;
    for(int i = 1; i < index; i++) {
        temp = temp->next;
    }
    printf("序号\t姓名\t性别\t年龄\t电话\n");
    printf("%d\t%s\t%s\t%d\t%s\n", index, temp->data.itemName, temp->data.price, temp->data.cost, temp->data.note);
}
