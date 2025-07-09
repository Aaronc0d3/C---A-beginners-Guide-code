#include <iostream>
#include <stdlib.h>
using namespace std;

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){
    int arr [10];
    cout << "This program checks if there are any duplicates in the array \nEnter in 10 interger values\n";

    for (int i=0; i<10;i++){
        cin >> arr[i];
    }

    qsort(arr,10,sizeof(arr[0]),compare);
    cout << arr;
    
    for (int i=1; i<10;i++){
        if (arr[i]==arr[i-1]) cout << "Duplicate for << " << arr[i] << " has been detected.\n";
    }
    return 0;
}