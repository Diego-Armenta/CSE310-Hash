#include <stdio.h>
#include <string>
#include "linkedList.h"

using namespace std;

node* newNode(string hash){
    node* n = new node;
    n->data = hash;
    n->next = NULL;
    return n;
}