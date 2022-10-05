#include<iostream>
using namespace std;
class implementAbstraction{
    private:
    int a,b;
    public:
    void set(int x, int y){
        a = x;
        b = y;
    }
    void get(){
        cout <<"a="<<a<<endl;
        cout <<"b="<<b<<endl;
    }
};

int main(){
    implementAbstraction obj;
    obj.set(10,20);
     obj.get();

    return 0;
}