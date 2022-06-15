#include<iostream>
using namespace std;

bool checkPalindrome(int arr[], int n){
    int i = 0;
    int j = n - 1;
    while (i < j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else {
            return false;
        }
    }
    return true;
}


int main(){

    int n = 5;

    int arr[] = {3,2,1,2,3};

    cout << "Palindrome or not " <<checkPalindrome(arr,n); 

    return 0;
}