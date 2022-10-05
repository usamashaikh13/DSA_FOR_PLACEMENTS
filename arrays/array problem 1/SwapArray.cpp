#include<iostream>
using namespace std;
void swapValues(int x, int y){ // 15 and 20
    
    int temp;
    temp = x; //temp = 20
    x = y; //
    y = temp;

    cout <<"After swapping the value of x and y "<< x <<" " << y <<endl;

}

int main(){

    int x = 15; // arguments
    int y = 20;

    cout <<"Before swapping the value of x & y " << x <<" " <<y<< endl;

    swapValues(x,y);

    return 0;


}