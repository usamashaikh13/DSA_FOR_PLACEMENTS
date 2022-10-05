#include<iostream>
using namespace std;

int CheckWhoWinsTheElection(int arr[],int n){
    int i, j, counter=0, maxCounter = 0, candidate;
    candidate = arr[0];
    for(int i = 0; i < n; i++){
        candidate = arr[i];
        counter = 0;
        for(int j = i + 1; j < n; j++){
            if(arr[i] == arr[j])
                counter++;
        }
        if(counter > maxCounter){
            maxCounter = counter;
            candidate = arr[i];
        }
    }
    return candidate;
}


int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<CheckWhoWinsTheElection(arr,n);

    return 0;

}