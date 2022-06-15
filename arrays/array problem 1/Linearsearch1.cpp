#include<iostream>
using namespace std;

bool search(int arr[], int n, int target ){

    for(int i = 0; i<n ; i++){
        if(arr[i] == target){
            return true;
        }
    }
    return false;
}

int main(){

    int arr[100];

    cout << "Enter the number of elements" <<endl;
    int n;
    cin >> n;
    

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(search(arr,5,7)){
        cout << "Element found " << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

}