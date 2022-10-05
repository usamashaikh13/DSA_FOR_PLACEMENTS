#include<iostream>
using namespace std;

void insertionSort(int arr[],int size){

    int i, key, j;
    for(int i = 1; i < size; i++){
        key = arr[i];
        j = i - 1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){

    int arr[] = {4,3,2,10,12,1,5,6};

    int size = 8;

    insertionSort(arr,size);

    for(int i = 0; i < size; i++){
        cout <<" "<<arr[i];
    }

    return 0;

    
}