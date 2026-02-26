#include <cmath>
#include "hash.h"



using namespace std;

double standardDeviation(double sum, int k){
    double value = sum/k;
    return sqrt(value);
}

double mean(double a, int b){
    double mean = a/(double)b;
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