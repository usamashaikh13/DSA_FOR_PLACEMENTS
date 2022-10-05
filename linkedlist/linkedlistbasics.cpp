#include<iostream>
using namespace std;

class Node {

    //data members
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = data;
        this -> next = NULL;
    }
};
int main(){
    Node a;
    cout << a.data << endl;
    cout << a.next <<endl;

    Node* b = new Node();
    cout << b->data << endl;
    cout << b->next <<endl;

    return 0;


}