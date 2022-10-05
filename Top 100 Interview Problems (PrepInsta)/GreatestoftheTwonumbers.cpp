#include<iostream>
using namespace std;

/*
int main(){
    int num1,num2;
    num1=75,num2=85;

    if(num1==num2)
      cout <<"both are equal";
    else if(num1 > num2)
      cout <<num1<<" is greater than "<<num2;
    else
      cout <<num2 <<" is greater than "<<num1;

    return 0;
}*/
class PrepInsta{
   public:
     int calcLargest(int,int);
};
int PrepInsta::calcLargest(int a, int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    PrepInsta obj;
    int num1, num2, largest;

    num1 = 36, num2 = 23;
    
    largest = obj.calcLargest(num1,num2);
    cout <<"largest: "<<largest;

    return 0;
}    