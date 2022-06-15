#include<iostream>
using namespace std;

int main(){

    int arr[5] = {2,4,6,8,10};
    int n = 5;
    int key = 6;

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout << "Element found at index " << i << endl;
        }
    }
    return 0;
}