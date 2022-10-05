#include <iostream>
using namespace std;

int main(){

    int n, reverse_number = 0, remainder;
    cin >> n;

    while(n != 0){
        remainder = n % 10; //16 % 10 will be equal to = 6
        reverse_number = reverse_number * 10 + remainder; 
        n = n/10;
    }
    cout << "Reverse Number is " << reverse_number <<endl;

    return 0;

}