#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char first[20];
    char second[20];
    char *c;

    cout<<"This program compares two words and see if they're duplicates regardless of capslock\nenter two words\n";
    cin >> first;
    cin >> second;
    c=first;
    
    while(*c){
        *c= tolower(*c);
         c++;
    }
    c=second;

    while(*c){
        *c=tolower(*c);
        c++;
    }

    cout << first;
    cout << second;
    
    if (!strcmp(first,second)) cout <<"These two words are duplicates";
    else cout <<"They are not duplicates";
    return 0;
}