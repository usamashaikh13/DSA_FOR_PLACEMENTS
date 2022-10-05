#include<iostream>
using namespace std;

int main(){
    for (int i = 0; i < 9; i++){
        cout << "#";
        if(i > 6){
            continue;
        }
        cout <<i;
    }
    return 0;
    
}