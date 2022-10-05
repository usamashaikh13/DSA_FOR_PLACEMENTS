#include<iostream>
using namespace std;

int main(){

    int num, rem, rev = 0;
    cout <<"Enter a number: ";
    cin>>num;
    int n = num;

    while(num > 0){
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num/10;
    }
    if(n == rev){
        cout << n <<" is a Palindrome.";
    }
    else{
        cout << n <<" is not a palindrome.";
    }
    return 0;
}