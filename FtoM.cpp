#include <iostream>
using namespace std;

int main() {
    double first; //feet varaible
    double mfirst;  //meter variable
    double fsecond;
    double msecond;
    cout << "Enter a length in feet:";
    cin >> first; //user input of feet

    cout << "Enter a length in meters:";
    cin >> msecond;

    mfirst = first/3.28;
    fsecond = msecond * 3.28;
    
    cout << msecond << " meters is " << fsecond << " feet \n";
    cout << first << " feet is " << mfirst << " meters.";

    return 0;
}