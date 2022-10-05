#include <iostream>
using namespace std;

int doUnion(int a[], int b[], int n, int m){

    int ans[] = {};
    int i = 0; int j = 0;

    while(i < n && j < m){
        if(a[i] == b[i] ){
           ans[i] = a[i];
        }
        else if(a[i] < b[i]){
            ans[i] = a[i];
        }
        else{
            ans[i] = b[i];
        }
    }
    int arrSize = sizeof(ans)/sizeof(ans[0]);
    return arrSize;
}

int main(){

    int a[] = {1,2,3,4,5,6};
    int b[] = {1,2,3};
    int n = 6;
    int m = 3;

    cout << doUnion(a,b,n,m);

    return 0;


}