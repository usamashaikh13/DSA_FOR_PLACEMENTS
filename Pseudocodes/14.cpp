#include<iostream>
using namespace std;
int funn(int p, int q, int r){
    if((p+q+r)<(q-r-p)){
        if((r+p+q) < (p+q+r)){
            if((p+q+r)<(q+r+p)){
            q = (8+12)+r;
        }
        p = (q+5)+r;
    }
    q = (p+7)+r;
    }
    q = (q+1)
    return p+q+r;

}

int main(){
    int p = 6, q = 6, r= 9;
    cout <<funn(p,q,r);
}