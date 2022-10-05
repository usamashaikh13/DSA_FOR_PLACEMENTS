#include <iostream>
using namespace std;

int SunriseBuilding(int arr[],int n){

    int count = 0;


    for(int i = n-1; i > 0; i--){

        if(i == 0){
            count++;
        }
       
        if(arr[i] > arr[i-1] ){
              count++;
        }
    }
    return count+1;
}

int main(){

    int arr[] = {7,4,8,2,9};

    int n = 5;

    cout<<SunriseBuilding(arr,n);

    return 0;
}