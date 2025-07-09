#include <iostream>
using namespace std;

int strlen(char *word){
    int count;
    while (*word){
        count++;
        word++;
    }
    return count;
}

int main(){
    char str[80];
    cout  << "This program just replicates the strlen library function by actually using it as a function\nEnter your word to get the length\n ";
    cin>>str;
    cout << "The numerical length of your word is " << strlen(str);
    return 0;
}
