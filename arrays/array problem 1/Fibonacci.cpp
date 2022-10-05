#include<iostream>
using namespace std;

int main(){
   
    int n, t1 = 0 , t2 = 1, nextTerm;
    cout << "Enter the number: ";
    cin >> n;

    for(int i = 0; i < n; i++){
    if(n == 0){
        cout << t1 <<",";
        continue;
    }
    if(n == 1){
        cout << t2 <<",";
        continue;
    }
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;

    cout << nextTerm <<",";
    }

    return 0;

}