#include <iostream>
using namespace std;

int main() {
    double p;
    int counter = 0;
    for (double i=1; i<101; i++){
        counter++;
        p = i*.17;
        cout << i << " Earth pound is equilavent to " << p << " Moon weight \n";
        if (counter == 25) {
        cout << "\n";
        counter = 0;
        }
    }
}

