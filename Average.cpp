#include <iostream>
using namespace std;

int main(){
    double average;
    double number;
    ;
    cout << "Enter 5 values ";
    for (int i =0; i<5; i++){
        cin >> average;
        number += average;
        cout << "\n";
    }
    number = number/5;
    cout << number;
    return 0;
}