#include<iostream>
using namespace std;
int funn(int a, int b, int c){
    if((9>c) || (a&c)<(b+a)){
        c = 7 + c;
    }
    if((4-b+c)>(c+a)){
        a=(9^9)+b;
    }
    a = 6 + a;
    return a+b+c;
    
}

int main(){
    int a = 0, b = 7, c= 4;
    cout <<funn(a,b,c);
}