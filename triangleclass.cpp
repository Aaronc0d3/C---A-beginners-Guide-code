#include <iostream>
using namespace std;

class Triangle{
    double base;
    double height;
public:
    Triangle(double x, double y)
    {
        base=x;
        height=y;
    }

    double hypot(){ return base*base+height*height;}
    double area(){ return (base*height)/2;}
};

int main(){
    double a;
    double b;
    cout << "This program computes the area of a triangle using classes\nenter a base and height for the triangle\n";
    cout << "Base ";
    cin >> a;
    cout <<"\nHeight ";
    cin >> b;

    Triangle ob (a,b);

    cout << ob.hypot() << "\n";
    cout << ob.area() << "\n";
    return 0;
}