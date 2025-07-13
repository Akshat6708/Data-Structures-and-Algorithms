#include<iostream>
using namespace std;

class Node{
    public: 
    int data; 
    Node* next;

    Node(int data){
        this->data= data;
        this->next= NULL;
        
    }
};

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

  Node* getMiddle(Node* &head){
    Node* slow= head;
    Node* fast = head->next;
    while(fast != NULL){
        fast= fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow= slow->next;
        }
    }
    return slow;
  }

int main(){
  
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    first->next= second;
    second->next= third;
    third->next = forth;
    forth->next = fifth;
    // fifth->next= NULL;
    fifth->next= sixth;
    sixth->next = NULL;

    // print(first);

cout<<"the Middle node is : "<<getMiddle(first)->data ; 


    return 0;
}