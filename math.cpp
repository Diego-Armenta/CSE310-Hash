#include <cmath>
#include "hash.h"



using namespace std;

int standardDeviation(){
    
}

double mean(double a, double b){
    double mean = a/b;
    return mean;
}

double sum(int slot, double mean){
    double sum = pow((slot - mean),2);
    return sum;
}

int slotLength(node* node){
    int counter = 0;
    while(node != nullptr){
        counter++;
        node = node-> next;
    }
    return counter;
}