#include <iostream>
#include <string>
#include <cmath>
#include "hash.h"


using namespace std;

int k;

int hashFunction(string text, node** table, int num) {
    k = num;
    int index = hashValue(text);
    addToBucket(index, text, table);

    return 1;
}

int hashValue(string text) {
   unsigned int h = 359u;

    for (int i = 0; i < (int)text.size(); i++) {
        h = h * 41u + (unsigned int)(unsigned char)text[i];
    }

    // avalanche finalizer 
    h ^= h >> 16;
    h *= 0x7feb352du;
    h ^= h >> 15;
    h *= 0x846ca68bu;
    h ^= h >> 16;

    return (int)(h % (unsigned int)k);
}




int addToBucket(int index, string text, node** table){
    node* n = newNode(text);
    if(table[index] == NULL){
        table[index] = n;
    } else {
        node* temp = table[index];
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
    }
    return 1;
}