#include <iostream>
using namespace std;

int main(){
    int count;
    char a;
    cout << "Enter a character, exit program by pressing $ ";
    while(a != '$') {
        if (a=='.') count++;
        cin >> a;
        cout << a << "\n";
    }
    cout << count << " Period have been printed";
    return 0;
}