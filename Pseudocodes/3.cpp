#include<iostream>
using namespace std;

int main(){

    int c, a = 9, b = 7;
    c = 2;
    b = b % c;
    a = a % c;

    cout << a + b;

    return 0;
}