#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}



int main(){

    int arr[] = {2,4,3,1};

    int size = 4;

    bubbleSort(arr,size);

    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }

    
    return 0;
}