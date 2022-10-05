#include<iostream>
using namespace std;

/* nested if se kiya hai first approach

int main(){
    int num;
    cin>> num;

    if(num % 2 == 0){
        cout << num <<" : Even";
    }
    else
       cout << num <<" : Odd";

    return 0;
}
Ternary operator se second approach
int main(){
    int num;
    cin >> num;

    num %2 == 0 ? cout <<"Even" : cout<< "Odd";
        

    return 0;
    
}*/
bool isEven(int num){
    return(!(num & 1));
}
int main(){
    int num;
    cout << "Enter the number"; cin >> num;

    if(isEven(num))
       cout << "Even";
    else
       cout <<"Odd";

    return 0;
}