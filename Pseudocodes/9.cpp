#include<iostream>
using namespace std;
int funn(int a, int b){
    if((a-2)<(b&4) && b>5){
        b = 2+b+b;
        a = 3+a+a;
        b=b+2;
        return funn(a+b,b)-b;
    }
    return b + 1;
    
}

int main(){
    int a =2, b = 7;
    cout <<funn(a,b);
}