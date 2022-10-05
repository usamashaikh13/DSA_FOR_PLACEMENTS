#include<iostream>
using namespace std;
class Base_class{
     public:
     virtual void show(){
        cout << "Apni kaksha base"<<endl;
     }
};
     class Derived_class : public Base_class{
     public:
     void show(){
        cout <<"APni kaksha derived"<<endl;
     }
     };


int main(){
    Base_class* b;
    Derived_class d;
    b = &d;
    b->show();
    return 0;
}