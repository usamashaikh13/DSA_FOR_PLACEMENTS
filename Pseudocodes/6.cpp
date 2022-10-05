#include<iostream>
using namespace std;

int main(){

    int g = 9, f = 6, sum = 0;

    if(g > f){
        for(int n = f; n < g; n++){
            sum = sum + n;
        }
        cout << sum;
    }
    else{
        cout <<"Error msg";
    }
    return 0;
}