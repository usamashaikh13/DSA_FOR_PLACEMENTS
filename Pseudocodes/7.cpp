#include<iostream>
using namespace std;
int func(int a, int b){
    if(a > 0){
        if(b > 0){
            return a + b + func(a+1, 0) + func(a+2, 0) + func(a+3, 0);
        }
    }
    return a + b;
}

int main(){
    int a = 2, b = 6;

    cout << func(a, b);
}