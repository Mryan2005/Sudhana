#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "element.h"

linkList readFile(char *fileName) {
    FILE *file = fopen(fileName, "rb");
    linkList temp = createALinkList();
    item tempItem;
    if(file == NULL) {
        printf("文件打开失败\n");
        file = fopen(fileName, "wb");
        
        return temp;
    }
    while(!feof(file)) {
        fread(&tempItem, sizeof(item), 1, file);
        addANode(&temp, tempItem);
    }
    fclose(file);
}   

void writeFile(char *fileName, linkList list) {
    FILE *file = fopen(fileName, "wb");
    Node *temp = list.head;
    while(temp != NULL) {
        fwrite(&temp->data, sizeof(item), 1, file);
        temp = temp->next;
    }
    fclose(file);
}