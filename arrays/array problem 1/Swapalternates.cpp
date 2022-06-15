#include<iostream>
using namespace std;

void swapArray(int arr[], int n){

    int i =0;
    while( i+1 < n){
        swap(arr[i],arr[i+1]);
        i+=2;
    }
    cout << "Swapped Array is " << endl;
    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }

}


int main(){

    int n = 6;

    int arr[] = {2,7,5,6,9,8};

    swapArray(arr,6);

    return 0;
}