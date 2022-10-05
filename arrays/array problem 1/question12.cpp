#include <iostream>
using namespace std;

int excercise(int arr[], int test, int energy){

    for(int i = 0; i < test; i++){
        if(arr[i] == energy){
            return 1;
        }
    }
    int sum = 0;
    int ans = 0;
    int ans1 = 0;
    for(int i = 0; i < test; i++){
        sum = sum + arr[i];
        if(sum >= energy){
            return ans;
        }
    }
    sum = 0;
    for(int i = 0; i <test; i++){
        sum = sum + arr[i];
        if(2*sum >= energy){
            ans1 = 2*(i+1);
            return ans1;
        }
    }
    return -1;
}

int main(){

    int energy;
    cin >> energy;

    int test;
    cin >> test;

    int arr[test];

    for(int i = 0; i < test; i++){
        cin>>arr[i];
    }
    int ans = excercise(arr, test, energy);
    cout << ans;
}