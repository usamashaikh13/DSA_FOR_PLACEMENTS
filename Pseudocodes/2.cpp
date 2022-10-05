#include <iostream>
using namespace std;

int Sample(int a, int b){
    int t = 0;
    while (b != 0){
        t = t + a;
        b--;
    }
    return t;
}

int main(){

    int a = 56, b = 876;

    cout << Sample(a,b);

    return 0;
}