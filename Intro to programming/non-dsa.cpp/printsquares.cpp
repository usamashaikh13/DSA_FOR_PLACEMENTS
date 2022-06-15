#include<iostream>
using namespace std;

void printSquares(int n){
   
    for(int i=0;i<=n;i++){
        cout << i*i <<", ";
    }

}

int main(){

    int n = 21;
    printSquares(n);


}