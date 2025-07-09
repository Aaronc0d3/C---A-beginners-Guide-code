#include <iostream>
using namespace std;

void recursion(int i){
    if (i < 11) {
    cout << i;
    i++;
    recursion(i);
    }
    else {
        return;
    }
}

int main(){
    cout<< "This program uses a recursive function that prints 1-10\n";
    recursion(0);

    return 0;
}