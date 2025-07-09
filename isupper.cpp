#include <iostream>
using namespace std;

int main(){
    int count;
    char word[80];
    char *c;
    cout << "This program returns the count of how many uppercases it finds\nenter your string ";
    cin >> word;
    c=word;
    while(*c){
        if (isupper(*c)) count++;
        c++;
    }

    cout << "There are " << count << " uppercase letters in this word";
    
    return 0;
}