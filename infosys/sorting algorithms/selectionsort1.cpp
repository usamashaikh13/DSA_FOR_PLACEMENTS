#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){

    for(int i = 0; i < size-1; i++){
        int min_i = i;
        for(int j = i+1; j < size; j++){
            if(arr[j]<arr[min_i]){
                min_i = j;
            }
                int temp = arr[i];
                arr[i] = arr[min_i];
                arr[min_i] = temp;
        }
    }
}


int main(){

    int arr[] = {25,11,9,2,55,4,26,7};

    int size = 8;

    selectionSort(arr,size);

    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }

    
    return 0;
}