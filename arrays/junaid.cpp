#include <iostream>
#include<limits.h>
using namespace std;

int SunriseBuilding(int arr[],int n){

    int count=1 , ans=arr[0];

    for(int i=1; i < n; i++){
        if(ans < arr[i] ){
            ans= arr[i]; 
            count++;   
        }
    }
    return count;
}

int main(){

    int arr[] = {11,3,7,12,18,14,16,21,2,26,30,8,42}, n=12; 

    

    cout<<SunriseBuilding(arr,n);

    return 0;
}