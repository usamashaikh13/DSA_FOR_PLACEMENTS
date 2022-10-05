#include<iostream>
using namespace std;

//DRIVER CODE
int main(){

    int car;
    cin >> car;

    int timein;
    cin>>timein;

    int timeout;
    cin>>timeout;

    int rate = 100;
    
    //CONDITION 1
    if(car == 1  && timein<=8 && timeout>=10){
         rate = 100*2;
         cout <<rate <<endl;
    }
    //CONDITION 2
    else if(car == 2  && timein<=10 && timeout>=11){
        rate = 150*1;
        cout<<rate;
    }
    //CONDITION 3
    else if(car==3  && timein <=11 && timeout>=12){
        rate = 200*1;
    }
    else if(car==3  && timein <= 12 && timeout>=15){
        rate = 150*3;
    }
    //CONDITION 4
    else if(car==2  && timein<=15 && timeout>=20){
        rate=200*5;
    }
    //CONDITION 5
    else if(car==2 && timein<=22 && timeout>=23){
        rate=100*1;
    }

   return 0;
   
}