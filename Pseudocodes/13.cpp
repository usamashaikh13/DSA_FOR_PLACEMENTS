#include<iostream>
using namespace std;
int funn(int p, int q, int r){
    p = (3+2)+r;
    if((p+q) > (q-p)){
        q = (q+4)&q;
    }
    if(9 > q && r < p){
       p = (3+11) + q;
    }
    else{
        p = (r&10)+r;
    }
    return p+q+r;
    
}

int main(){
    int p = 8, q = 2, r= 10;
    cout <<funn(p,q,r);
}