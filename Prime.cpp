#include <iostream>
using namespace std;

int main() {


for (int i=2; i<101; i++){
    for(int y=i-1; y>1; y--){
        if (!(i%y)){
            break;
        } 
        else if (y==2){
            cout << i << " is a prime number \n";
        } 
    }
}
return 0;
}