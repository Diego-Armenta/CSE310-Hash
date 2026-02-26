#include <stdio.h>
#include <string>

using namespace std;


struct node{string data; node* next;};
node* newNode(string hash);