#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){

    for(int i = 0; i < size-1; i++){
        int min_idx = i;
        for(int j = i+1; j < size; j++){
            if(arr[j]<arr[min_idx])
                min_idx = j;
        }
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        
    }
}

int main(){

    int arr[] = {2,7,4,1,5,3};

    int size = 6;

    selectionSort(arr,size);

    for(int i = 0; i < size; i++){
        cout << arr[i] <<" ";
    }
    
    return 0;
}