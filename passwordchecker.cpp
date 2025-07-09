#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[]){
    cout << "This program checks if you selected the right password from the command line\n";
    for (int i=1; i<argc; i++){
        if (strcmp(argv[i],"Password")==0) cout << argv[i] << " is the right password\n";
        else cout << argv[i] << " is not the right password\n";
    }
    return 0;
}