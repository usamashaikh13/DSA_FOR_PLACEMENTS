#include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){
    int sum = 0;
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        maxi = max(sum,maxi);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
}

int main(){
    int arr [] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_sum = maxSubarraySum(arr,n);

    cout <<"Maximum contigious sum is " <<max_sum;

    return 0;

} 
/*  #include<bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n){  
    int sum=0;  
    int maxi=INT_MIN;  
    for(int i=0;i<n;i++){  
        sum += arr[i];  
        maxi=max(sum,maxi);  
        if(sum<0)  {
            sum=0;  
        }       
    }  

    return maxi;  
}
 
int main(){
    int arr[] = {-2,-3,4,-1,-2,1,5,-3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int max_sum = maxSubarraySum(arr,n);

    cout << "Maximum contigious sum is" <<max_sum;

    return 0;
}   */