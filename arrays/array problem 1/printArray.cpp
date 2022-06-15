#include <iostream>
using namespace std;

int printArray(int arr[], int n){

    for(int i = 0; i < n ; i++){
        cout << arr[i] <<" ";
    }
    return 0;
}

int main(){

    int n = 5;

    int arr[5] = {1,2,3,4,5};

    printArray(arr, 5);
}