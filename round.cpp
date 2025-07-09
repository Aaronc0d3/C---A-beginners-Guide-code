#include <iostream>
#include <cmath>
using namespace std;

void myround(double num){
    double intpart;
    double decimal = modf(num, &intpart);
    cout << decimal;
    if (decimal > 0.4) { 
        intpart++;
        cout << "this is your rounded number" << intpart;
    }
    else{
        num = num -decimal;
        cout << "This is your rounded number" << num;
    }
}

int main(){
    double num;
    cout << "This program rounds your number up or down depending if it's decimal form is greater or less than 5\nenter your number";
    cin >> num;

    myround(num);
    return 0;
}