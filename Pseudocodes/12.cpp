#include<iostream>
using namespace std;
int funn(int p, int q, int r){
    q = (9+4)+p;
    if(4>q && p>q){
        p = (q+q)+q;
    }
    r = p + r;
    if((p^q)<r){
        p = (q+p)+p;
    }
    return p+q+r;
    
}

int main(){
    int p = 9, q = 8, r= 9;
    cout <<funn(p,q,r);
}