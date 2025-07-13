#include<iostream>
using namespace std;
class Node{
    public:
    int data; 
    Node* next;

    Node(int data){
        this-> data =data;
        this-> next =NULL;
    }

};

void RemoveDuplicates(Node* &head){
    Node* curr= head;
    while(curr != NULL && curr->next != NULL){
      if(curr->data == curr->next->data && curr->next != NULL){
        Node* temp = curr->next;
        curr->next= curr->next->next;
        temp->next= NULL;
        delete temp;
      }
      else{
        curr= curr->next;
      }
    }
  
}

void print(Node* &head){
    Node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* fourth = new Node(3);
    Node* fifth = new Node(4);
    Node* sixth = new Node(4);
    Node* seventh = new Node(5);
    
    head->next= second;
    second->next= third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = NULL;
    cout<<"Given linked List : " ;
  print(head);
  cout<<endl;
    RemoveDuplicates(head);
    cout<<"after Remove duplicates : ";
    print(head);
    
  
}