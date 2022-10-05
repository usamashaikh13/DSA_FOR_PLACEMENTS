#include<bits/stdc++.h>
using namespace std;

int CheckWhoWinsTheElection(int arr[],int n){
    int i, j, currentCounter = 1, maxCounter = 1;
    int currentCandidate, maxCandidate;
    currentCandidate = maxCandidate = arr[0];

    sort(arr,arr+n);

    for(int i = 1; i < n; i++){
        if(arr[i] == currentCandidate){
        currentCounter++;
        }
        else{
            currentCandidate = arr[i];
            currentCounter = 1;
        }
        if(currentCounter > maxCounter){
            maxCounter = currentCounter;
        }
        else{
            maxCandidate = currentCandidate;
            maxCounter = currentCounter;
        }
    }
    return maxCandidate;
    
}


int main(){
    
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<CheckWhoWinsTheElection(arr,n);

    return 0;

}
//Time complexity O(n^2) & space complexity is O(1)