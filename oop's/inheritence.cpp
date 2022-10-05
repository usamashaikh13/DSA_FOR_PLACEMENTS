#include<iostream>
using namespace std;
//base class
class Animal{
    public:
    void eat(){
        cout << "I can eat" << endl;
    }

    void sleep(){
        cout << "I can sleep" << endl;
    }
};
class Dog : public Animal{
    public:
    void bark(){
        cout << "I can bark! woof woof!!" <<endl;
    }
};

int main(){
    //creating object of Dog class
    Dog dog1;

    //calling members of the base class
    dog1.eat();
    dog1.sleep();

    dog1.bark();

}