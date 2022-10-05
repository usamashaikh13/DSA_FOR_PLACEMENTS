#include<iostream>
using namespace std;
class Stack{

    int *arr;
    int top;
    int size;
    Stack (int size){
        arr = new int(size);
        top = -1;
        this->size = size;
    }
    void push(int d){
        top++;
        arr[top] = d;
    }
    void pop(){
        top--;
    }
    void pop(){
        top--;
    }
    int getsize(){
        return this->size;
    }
    bool isEmpty(){
        if(top == -1){
            
        }
    }
}

int main(){

    stack<int> st;

    cout << st.size() << endl;


}