#include <iostream>
#include <string>
#include "math.h"
// You are free to use additional libraries as long as it's not PROHIBITED per instruction.

using namespace std;

int hashFunction(string text, node** table);
int hashTable(node** table, int k);
int addToBucket(int index, string text, node** table);
int hashValue(string text);