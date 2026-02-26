#include <iostream>
#include <string>
#include "hash.h"


using namespace std;

int hashFunction(string text, node** table) {
      
    int index = hashValue(text);
    addToBucket(index, text, table);

    return 1;
}

int hashValue(string text) {
    int i;
    int value = 0;
    for(i = 0; i < text.length(); i++){
        value += (int)text[i];
    }
    
    int index = value % 5;

    return index;
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

int hashTable(node** table, int k){
    for(int i = 0; i < k; i++){
        table[i]->data = "";
    }
    return 1;
}