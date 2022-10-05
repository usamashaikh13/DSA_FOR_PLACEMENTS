#include <iostream>
using namespace std;

int func(int a, int b){
    if(a < b){
        return func(b, a);
    }
    else if(b != 0){
        return (a + func(a,b-1));
    }
    else{
        return 0;
    }
}

int main(){
    int a = 8, b = 9;
    cout << func(a, b);
}