#include<iostream>
using namespace std;
//Brute force approach
/*int main(){
    int N;
    cin >> N;

    if(N<0){
        cout << "The number is negative"<< endl;
    }
    else if(N>0){
        cout << "The number is positive" << endl;
    }
    else{
        cout <<"The number is zero" <<endl;
    }
}*/
int main(){
    int N;
    cin>>N;

    if(N==0)
        cout <<"zero"; else(N>0) ? cout <<"positive" :  cout <<"negative";

    return 0;
    
}
