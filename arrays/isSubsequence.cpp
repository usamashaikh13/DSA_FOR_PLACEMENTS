#include<bits/stdc++.h>
using namespace std;

int sub(int arr[], int i, int n, int prev){

    if(i == n){
        return 0;
    }
    int a = sub(arr, i + 1, n, prev);
    int b = 0;
    if(arr[i] > prev)
       b = 1 + sub(arr, i + 1, n, arr[i]);

    return max(b,a);
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    int res = sub(arr,0,n,0);
    cout << res;
}