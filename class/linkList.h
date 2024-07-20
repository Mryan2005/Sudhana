#pragma once
#include <stdlib.h>
#include <stdio.h>
#include "element.h"

typedef struct node {
    item data;
    struct node *next;
} Node;
typedef struct {
    Node *head;
    Node *tail;
    int length;
} linkList;

linkList createALinkList() {
    linkList temp;
    temp.head = NULL;
    temp.tail = NULL;
    temp.length = 0;
    return temp;
}

void addANode(linkList *list, item data) {
    Node *temp = (Node*)malloc(sizeof(Node));
    temp->data = data;
    temp->next = NULL;
    if(list->length == 0) {
        list->head = temp;
        list->tail = temp;
    } else {
        list->tail->next = temp;
        list->tail = temp;
    }
    list->length++;
}

void deleteANode(linkList *list, int index) {
    if(index < 0 || index >= list->length) {
        printf("删除失败: 超出范围\n");
        return;
    }
    Node *temp = list->head;
    if(index == 0) {
        list->head = list->head->next;
        free(temp);
        list->length--;
        return;
    }
    for(int i = 0; i < index - 1; i++) {
        temp = temp->next;
    }
    Node *temp2 = temp->next;
    temp->next = temp2->next;
    free(temp2);
    list->length--;
}

item getANode(linkList *list, int index) {
    if(index < 0 || index >= list->length) {
        printf("获取失败: 超出范围\n");
        item temp;
        temp.itemName = NULL;
        return temp;
    }
    Node *temp = list->head;
    for(int i = 0; i < index; i++) {
        temp = temp->next;
    }
    return temp->data;
}