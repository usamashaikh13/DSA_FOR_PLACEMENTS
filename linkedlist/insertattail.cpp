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
void insertAtHead(Node* &head, int d){
        Node* newNode = new Node(d);
        newNode->next = head;
        
    }
int main(){
    Node a;
    cout << a.data << endl;
    cout << a.next <<endl;

    Node* b = new Node();
    cout << b->data << endl;
    cout << b->next <<endl;

    return 0;


}