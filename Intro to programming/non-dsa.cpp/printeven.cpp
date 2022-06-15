#include<iostream>
using namespace std;

void printEven (int n){

    for(int i=2; i<=n; i+=2){
        cout << i << endl;
        
    }
}

int main(){

    int n = 21;
    printEven(n);

    return 0;

}