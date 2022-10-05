#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for(int i = 0; i < size-1; i++){
        for(int j = i + 1; j < size; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main(){

    int arr[] = {25,11,9,2,55,44,26,7};

    int size = 8;

    bubbleSort(arr,size);

    for(int i = 0; i < size; i++){
        cout <<" "<<arr[i];
    }

    return 0;
}