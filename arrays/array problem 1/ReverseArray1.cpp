#include<iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int i = 0;
    int j = n - 1;
    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}


int main(){
  
   int arr[] = {3,5,7,9,2,6,5};

   reverseArray(arr, 7);

   //print the array
   for(int i = 0; i<7; i++){
      cout << arr[i] << " ";
   }
   return 0;

}