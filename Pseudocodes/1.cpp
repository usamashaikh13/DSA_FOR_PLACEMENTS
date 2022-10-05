#include<iostream>
using namespace std;

int Sample(int n){
    int i = 0, s = 0;
    while(n > 0){
        int r = n % 10;
        int p = 8^i;
        s = s + p * r;
        i++;
        n = n/10;
    }
    return s;
}

int main(){

    int n = 127;

    cout << "Value of S is "<<Sample(n);

    return 0;
}