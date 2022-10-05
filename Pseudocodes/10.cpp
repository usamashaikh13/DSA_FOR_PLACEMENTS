#include<iostream>
using namespace std;
int funn(int a, int b, int c){
    for (int i = 2; i <= 5; i++){
        a= 9+b;
        if((c&8&a) < (6&c)){
            b = c + a;
            a = 8 + c;
        }
    }
    return a + b;
    
}

int main(){
    int a = 4, b = 5, c= 6;
    cout <<funn(a,b,c);
}