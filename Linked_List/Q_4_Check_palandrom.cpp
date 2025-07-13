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
Node* Reverse(Node* head){
    Node* prev =NULL;
    Node* curr= head; 
    Node* forward = curr->next;
    while(curr != NULL){
        forward= curr->next;
        curr->next= prev;
        prev= curr;
        curr= forward;
    }
    return prev;
}

bool checkPalindrom(Node* &head){
  if( head == NULL){
    return false;
  }
  // only one node in the LL
  if(head->next== NULL){
    return true;
  }

// > 1 node in the ll

// step A : find the middle node of ll
  Node* slow= head ; 
  Node* fast= head->next;
  while(fast != NULL){
    fast= fast->next ;
    if(fast != NULL){
        fast = fast->next;
        slow = slow->next;
    }
  }
  // slow pointer point to the middle node 
  // step B : reverse the ll to the middle node 

  Node* reverseLLKahead = Reverse(slow->next);
  slow-> next = reverseLLKahead;

  // step :C start caparison
  Node* temp1 = head;
  Node* temp2 = reverseLLKahead;
  while(temp2 != NULL){
    if(temp1->data != temp2->data){
        return false;
    }
    else{
        temp1= temp1->next;
        temp2= temp2->next;
    }
  }
  return true;

}


int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(30);
    Node* fifth = new Node(20);
    Node* sixth = new Node(10);
    
    head->next= second;
    second->next= third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    
    bool isPalindrom = checkPalindrom(head);
    if(isPalindrom){
        cout<<"LL is palindrom";
    }
    else{
        cout<<" not a palindrom";
    }
}