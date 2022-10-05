#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}


int main(){

    int n = 33;

    if(isPrime(n)){
        cout << "Prime number";
    }
    else{
        cout << "Not a Prime";
    }
    return 0;
}