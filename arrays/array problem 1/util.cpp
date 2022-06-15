#include <iostream>
using namespace std;

int util(int arr[], int n){

   arr[0] = 32;
   for(int i=0; i<n; i++){
       cout << arr[i] << " ";
   }
   return 0;

}


int main(){

    int n = 3;

    int arr[3] = {3,5,10};

    util(arr,3);

    cout << "printint array"<<endl;

    for(int i=0; i<n; i++){
        cout << arr[i] << endl;

    }
    return 0;


     
}