#include<iostream>
using namespace std;

/*

int main(){
    int n;
    cin>>n;

    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    cout << "The sum of N natural numbers is " << sum;

    return 0;
}*/

int main(){
    int n;

    cout << "Enter a number : ";
    cin>>n;

    cout << n*(n+1)/2;

    return 0;
}