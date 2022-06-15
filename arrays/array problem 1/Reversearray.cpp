#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){

    int i = 0, j = n - 1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
    
    
}

int main(){
    int n = 5;

    int arr[] = {1,2,3,4,5};
   
    reverseArray(arr,5);

    cout << "Reversed Array is" << endl;
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }

    return 0;

}