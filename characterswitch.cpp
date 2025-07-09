#include <iostream>
#include <cstdio>
#include <cstring>
#include <cctype>
#include <string>
using namespace std;

int main(){
    char str[80];
    int count=0;
    bool state=true;
    do{
        std::cout << "Enter something that's 80 characters long, if you would like to exit then enter a period.  \n";
        std::getline(std::cin, str);
        std::cout << str << "\n";
        if (strcmp(str,".")==0){
            state=false;
            continue;
        } 
        for (int i=0; str[i];i++){
            switch (str[i]) {
            case 'A':
                str[i] += 32;
                count++;
                break;
            case 'B':
                str[i] += 32;
                count++;
                break;
            case 'C':
                str[i] += 32;
                count++;
                break;
            case 'D':
                str[i] += 32;
                count++;
                break;
            case 'E':
                str[i] += 32;
                count++;
                break;
            case 'F':
                str[i] += 32;
                count++;
                break;
            case 'G':
                str[i] += 32;
                count++;
                break;
            case 'H':
                str[i] += 32;
                count++;
                break;
            case 'I':
                str[i] += 32;
                count++;
                break;
            case 'J':
                str[i] += 32;
                count++;
                break;
            case 'K':
                str[i] += 32;
                count++;
                break;
            case 'L':
                str[i] += 32;
                count++;
                break;
            case 'M':
                str[i] += 32;
                count++;
                break;
            case 'N':
                str[i] += 32;
                count++;
                break;
            case 'O':
                str[i] += 32;
                count++;
                break;
            case 'P':
                str[i] += 32;
                count++;
                break;
            case 'Q':
                str[i] += 32;
                count++;
                break;
            case 'R':
                str[i] += 32;
                count++;
                break;
            case 'S':
                str[i] += 32;
                count++;
                break;
            case 'T':
                str[i] += 32;
                count++;
                break;
            case 'U':
                str[i] += 32;
                count++;
                break;
            case 'V':
                str[i] += 32;
                count++;
                break;
            case 'W':
                str[i] += 32;
                count++;
                break;
            case 'X':
                str[i] += 32;
                count++;
                break;
            case 'Y':
                str[i] += 32;
                count++;
                break;
            case 'Z':
                str[i] += 32;
                count++;
                break;
            case 'a':
                str[i] -= 32;
                count++;
                break;
            case 'b':
                str[i] -= 32;
                count++;
                break;
            case 'c':
                str[i] -= 32;
                count++;
                break;
            case 'd':
                str[i] -= 32;
                count++;
                break;
            case 'e':
                str[i] -= 32;
                count++;
                break;
            case 'f':
                str[i] -= 32;
                count++;
                break;
            case 'g':
                str[i] -= 32;
                count++;
                break;
            case 'h':
                str[i] -= 32;
                count++;
                break;
            case 'i':
                str[i] -= 32;
                count++;
                break;
            case 'j':
                str[i] -= 32;
                count++;
                break;
            case 'k':
                str[i] -= 32;
                count++;
                break;
            case 'l':
                str[i] -= 32;
                count++;
                break;
            case 'm':
                str[i] -= 32;
                count++;
                break;
            case 'n':
                str[i] -= 32;
                count++;
                break;
            case 'o':
                str[i] -= 32;
                count++;
                break;
            case 'p':
                str[i] -= 32;
                count++;
                break;
            case 'q':
                str[i] -= 32;
                count++;
                break;
            case 'r':
                str[i] -= 32;
                count++;
                break;
            case 's':
                str[i] -= 32;
                count++;
                break;
            case 't':
                str[i] -= 32;
                count++;
                break;
            case 'u':
                str[i] -= 32;
                count++;
                break;
            case 'v':
                str[i] -= 32;
                count++;
                break;
            case 'w':
                str[i] -= 32;
                count++;
                break;
            case 'x':
                str[i] -= 32;
                count++;
                break;
            case 'y':
                str[i] -= 32;
                count++;
                break;
            case 'z':
                str[i] -= 32;
                count++;
                break;
            default:
                std::cout << "An alphabetical character wasn't detected and therefore wasn't modified \n";
                count++;
                break;
            }       
    }
} while(state);   
std::cout << str << " " << count << "\n";
return 0;
}