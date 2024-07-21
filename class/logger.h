#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

File openAFile() {
    File *fp = fopen("./log/log.log", "a");
    if(!fp) fp = fopen("log.log", "w");
    return fp;
}

void printLogIntoFile(char *type, char *context, File *fp) {
    
}