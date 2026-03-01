/*
CSE 310 Hash Function DIY Contest
Instructor: Yiran "Lawrence" Luo
Your name(s): Diego Armenta, VikramThevar
Your team alias: Demure Juggers
*/

#include <iostream>
#include <iomanip>
#include <string>
#include "hash.h"


using namespace std;

int main() {

    int k = 0;
    int n = 0;
    string texts[500];

    // WARNING: Start of the tokenizer that loads the input from std::cin, DO NOT change this part!
    cin >> k;
    string line;
    getline(cin, line);

    while (getline(cin, line)) {
        texts[n] = line;
        n++;
    }
    // WARNING: End of the tokenizer, DO NOT change this part!

    // By this point, k is the # of slots, and n is the # of tokens to fit in
    // texts[] stores the input sequence of tokens/keys to be inserted into your hash table

    // The template is able to be compiled by running 
    //   make
    //   ./encoder < inputs/sample_input.txt
    // which puts out the placeholders only.

    // Your time to shine starts now

    node* table[k] = {nullptr};
    

    for(int i = 0; i < n; i++){
        hashFunction(texts[i], table, k);
    }

    
    


    cout << "==== Printing the contents of the first 5 slots ====" << endl;

    for(int i = 0; i < 5; i++){
        cout << "Slot " << i << ": ";
        node* temp = table[i];
        while(temp != nullptr){
            cout << temp->data <<" ";
            temp = temp-> next;
        }
        cout << "\n";
    }

    cout << "==== Printing the slot lengths ====" << endl;

    for(int i = 0; i < k; i++){
        cout << "Slot " << i << ": ";
        cout << slotLength(table[i]) << "\n";
    }
    cout << "==== Printing the standard deviation ====" << endl;
    double average = mean(n, k);
    double numerator = 0;
    for(int i = 0; i < k; i++){
        numerator += sum(slotLength(table[i]), average);
    }

    cout << fixed << setprecision(4)<< standardDeviation(numerator, k) << endl;

    return 0;
}