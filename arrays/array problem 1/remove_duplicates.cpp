#include<iostream>
using namespace std;
void remove_duplicates(int arr[], int n){

    if(n==0 || n == 1){
        return n;
    }
    int len = 0,i;



    for(int i=0;i<len;i++){
        if(arr[i] != arr[i+1]){
            arr[len++] = arr[i];
            arr[len] = arr[n-1];
        }
    }
}

int main(){


}