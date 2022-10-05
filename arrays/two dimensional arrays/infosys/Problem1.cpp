#include<bits/stdc++.h>
using namespace std;

bool converted(int M, int base){

    int rem = M % base;
    M = M / base;

    while(M >= base){
        if(M % base != rem)
          return 0;

        M /= base;
    }
    if(M == rem)
      return 1;

    return 0;


}

int main(){

    int M;
    cin>>M;

    int base = 2;

    while(converted(M,base) != 1){
        base++;
    }
    cout << base;

    return 0;
}