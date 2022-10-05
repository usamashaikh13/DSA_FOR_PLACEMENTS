#include <iostream>
using namespace std;

int main(){

    int n = 153;
    int temp = n;
    int p = 1;

    

    while(n>0){
      int rem = n%10;
      n = n/10;
      p = rem*rem*rem;
    }
    if(temp == p){
        cout << "This is armstrong no" <<endl;
    }
    else{
        cout <<"This is not armstrong no" <<endl;
    }
    return 0;
}