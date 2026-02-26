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
    int i;
     unsigned long long h = 1469598103934665603ULL;
    int value = 0;
    for(i = 0; i < text.length(); i++){
        char c = text[i];
        switch (i % 3) {
            case 0: h = h * 131ULL + c; break;
            case 1: h = h * 97ULL  + c; break;
            case 2: h = h * 257ULL + c; break;
        }

        h ^= (h >> 13); // cheap extra mix
    }

    return (int)(h % (unsigned long long)k);
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