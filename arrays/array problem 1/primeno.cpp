#include<iostream>
using namespace std;

int main(){

    int i, n;
    bool is_prime = true;

    cout << "Enter a Positive Interger: ";
    cin >> n;
    
    //0 and 1 are not a prime numbers
    if( n == 0 || n == 1){
        is_prime = false;
    }
    for(int i = 2; i <= n/2; i++){
        if(n%i == 0){
            is_prime = false;
            break;
        }
    }
    if(is_prime)
      cout << n << " is a prime number";
    else
      cout << n << " is not a prime number";

      return 0;
}