#include<iostream>
#include<limits.h>
using namespace std;

int maxMin(int arr[],int n){
   int mx = INT_MIN;
   int mn = 1000; 
   
   

   for(int i =0; i<n; i++){
       mn = min(arr[i],mn);
   } 

   return mn;

   


}

int main(){

    int n = 6;
    int arr[] = {14,17,18,24,7,200};
    
    cout << "Minimum value is " <<maxMin(arr,6) <<endl;
   
    return 0;
}