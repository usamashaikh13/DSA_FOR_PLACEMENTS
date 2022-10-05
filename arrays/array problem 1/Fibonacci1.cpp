#include<iostream>
using namespace std;

int main(){
    
    int n;
    cout <<"Enter a number: ";
    cin >> n;
    int t1 = 0, t2 = 1, nextTerm = 0;
    for(int i = 1; i <= n; i++){
       if(n == 1){
        cout << t1 ;
        continue;
       }
       if(n == 2){
        cout << t2;
        continue;
       }
       nextTerm = t1 + t2;
       t1 = t2;
       t2 = nextTerm;

       cout <<nextTerm <<" ";
    }


    return 0; 


}