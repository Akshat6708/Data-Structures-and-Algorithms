#include<iostream>
using namespace std;

class Node{
    public:
    int data = 0;
    Node* next = NULL;
    
    Node(int data){
        this->data = data;
        this->next= NULL;
    }
};

   Node* Reverse(Node* head1){
  Node* prev =NULL;
  Node* curr= head1 ;
  while(curr != NULL){
    Node* forward = curr->next;
    curr->next= prev ; 
    prev = curr;
   curr = forward;
  }
  return prev;
}
void print(Node* &head){
    Node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

  Node* solve(Node* head1 , Node* head2){

    // step 1 reverse both linked list 
    head1= Reverse(head1); 
    head2 = Reverse(head2);

    // add both LL 
    Node* ansHead = NULL;
    Node* ansTail =NULL;
    int carry = 0;
    while( head1!= NULL && head2 != NULL){
        int sum = carry + head1->data + head2->data ;
        int digit = sum % 10 ;
        carry = sum /10 ; 
        // create a new node for the  digit
        Node* newnode = new Node(digit);
        // attech the node into the ans wali linked list
        if(ansHead == NULL){
            // insert first node 
            ansHead = newnode ;
            ansTail = newnode ;
        }else{
            ansTail->next = newnode;
            ansTail = newnode;
        }
        head1 = head1->next;
        head2 = head2->next;
    }

    // if linked list is not equal to NULL  ( because ll1 is grater then the ll2)
 while(head1!= NULL){
     int sum = carry + head1->data;
     int digit = sum % 10 ;
     carry = sum / 10 ; 
     Node* newnode = new Node(digit);
     ansTail->next = newnode ;
     ansTail = newnode;
     head1 = head1->next;

    }

     // if linked list 2 is not equal to NULL  ( because ll->2 is grater then the ll->1)

while(head2!= NULL){
     int sum = carry + head2->data;
     int digit = sum % 10 ;
     carry = sum / 10 ; 
     Node* newnode = new Node(digit);
     ansTail->next = newnode ;
     ansTail = newnode;
     head2 = head2->next;

    }
    //  carry ko alag se handle kerna padega 
      while(carry != 0 ){ 
        int sum = carry ;
        int digit = sum %10 ; 
        carry = sum /10 ;

         Node* newnode = new Node(digit);
         ansTail->next = newnode ;
         ansTail = newnode;
      }

    // reverse ans vali linked list
    
     ansHead = Reverse(ansHead);
   return ansHead;
  }


int main(){
    Node* head1 = new Node(9);
    Node* second1= new Node(9);
    Node* third1 = new Node(9);
     head1->next = second1;
     second1->next = third1;
   

    Node* head2 = new Node(9);
    Node* second2= new Node(9);
    Node* third2 = new Node(9); 
    head2->next = second2;
    second2->next = third2;
 
   
 Node* ans = solve(head1, head2);
 print(ans);

    return 0;
}