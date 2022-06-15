#include<bits/stdc++.h>
using namespace std;

	bool find3Numbers(int A[], int n, int X)
    {
       sort(A, A+n);
       for(int i=0;i<n-2;i++){
           int left=i+1;
           int right=n-1;
           while(left<right){
               if(A[i]+A[left]+A[right]==X){
                   return true;
               }
               else if(A[i]+A[left]+A[right]>X){
                   right--;
               }
               else{
                   left++;
               }
           }
       }
       return false;
    }


    int main(){

        int n = 6;
        int arr[] = {1 ,4 ,45 ,6 ,10 ,8};
        
        cout << find3Numbers(arr,6,13);

        return 0;

    }