#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "element.h"

CostCount getCostCount(linkList list, int mode, int frequency) {
    Node *temp = list.head;
    CostCount result;
    result.cost = 0;
    result.count = 0;
    for(int i = 0; i < list.length; i++) {
        // do some calculations
    }
    return result;
}