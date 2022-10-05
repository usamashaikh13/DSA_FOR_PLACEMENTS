#include<iostream>
using namespace std;

int main(){
    int x = 5;
    int y = 10;

    int sum = y*(y+1)/2 - x*(x+1)/2 + x;

    cout << sum;

    return 0;
}