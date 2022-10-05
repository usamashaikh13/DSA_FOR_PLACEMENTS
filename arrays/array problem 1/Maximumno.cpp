#include<iostream>
using namespace std;

pair<int,int> findMaximum(int arr[], int n){
    
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
        pair ans = make_pair(min,max);
    }
    return ans;
}

int main(){

    int arr[] = {3,12,7,18,17,16};

    findMaximum(arr, 6);

    cout << "Maximum Value in Array is " << findMaximum(arr,6);

    return 0;


}