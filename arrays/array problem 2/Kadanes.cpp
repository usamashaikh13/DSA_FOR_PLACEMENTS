#include<iostream>
using namespace std;

int getMaximumSubarray(int arr[], int n){

    int sum = 0;
    int ans = INT_MIN;

    for(int i = 0; i < n; i++){
        sum = sum + arr[i];

        ans = max(ans, sum);

        if(sum < 0){
            sum = 0;
        }
    }
    return ans;
}

int main(){
    int n = 8;

    int arr[] = {-2,-3,4,-1,-2,1,-5,3};

    cout << "Maximum Subarray Sum is "<< getMaximumSubarray(arr,8) << endl;

    return 0;


}