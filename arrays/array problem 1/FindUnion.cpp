#include<iostream>
using namespace std;
void printUnion(int arr1[],int arr2[],int m, int n){
    int i = 0, j =0;
    //checking 3 conditions
    while(i < m && j < n){
        if(arr1[i] < arr2[j]){
            cout << arr1[i++] <<" ";
        }
        else if(arr2[j] < arr1[i]){
            cout << arr2[j++] <<" ";
        }
        else{
            cout << arr2[j++] <<" ";
        }
    }
    //priniting the remaining elements
    while(i<m){
         cout << arr1[i++] <<" ";
    }
    while(j < n){
        cout << arr2[j++] <<" ";
    }
}

int main(){

    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[] = {9,10};

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    printUnion(arr1,arr2,m,n);

    return 0;
}