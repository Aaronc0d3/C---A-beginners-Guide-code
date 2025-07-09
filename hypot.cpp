#include <iostream>
#include <cmath>
using namespace std;

double hypot(double width, double height){
    return sqrt(width)+sqrt(height); //told me to use the square root function so here you go
}

int main(){
    double width, height;
    cout << "This program calculate the hypotnuse of a right triangle based on the width and the height \nEnter a width\n";
    cin >> width;
    cout << "Enter a height\n";
    cin >> height;

    cout << "Your hypotnuse is "<< hypot(width,height);
    return 0;
}