#include <iostream>
using namespace std;
void counter(){
    static int a=0;
    a++;
    cout << a;
}
int main(){
    int i=0;
    int count;
    cout << "This program just counts how many times a function is called by your input\ninput a number ";
    cin >> count;

    while (i<count) {
        counter();
        i++;
    }
    return 0;
}