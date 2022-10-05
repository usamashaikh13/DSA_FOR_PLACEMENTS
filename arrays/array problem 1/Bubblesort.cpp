#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n){

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++ ){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout <<arr[i] <<" ";
    }
   
}

int main(){

    int n = 6;

    int arr[] = {6,5,4,3,2,1};

    bubbleSort(arr,n);

    return 0; // successful execution
}