#include<iostream> 
using namespace std ;
class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data= data;
        this->next= NULL;
    }
};
Node* reverse(Node* &head){
  Node* prev = NULL;
  Node* curr= head; 
  Node* forward= curr->next;
  while(curr != NULL){
    forward= curr->next;
    curr->next= prev;
    prev= curr;
    curr= forward;
  }
  return prev;
}

bool checkPlaindrom(Node* &head){
    if (head == NULL){
        cout<<"empty linked list"<<endl;
        return false;
    }
    if(head->next== NULL){
        return true;
    }
    // if more then one node present in the lL
    // step -1 find mid 
    Node* slow = head;
    Node* fast= head->next;
    while(fast!= NULL){
        fast = fast->next;
        if(fast != NULL){
            fast= fast->next;
            slow= slow->next;
        }
    }
    // slow is point to mid point

    // step 2  revrese the ll from the mid poits
    Node* ReverseHead= reverse(slow->next);
    slow->next = ReverseHead;

    // step 3 check if palindrom or not 
    Node* temp1 = head;
    Node* temp2 = ReverseHead;
    while(temp2 != NULL){
        if(temp1->data != temp2->data){
            return false;
        }
        else{
            temp1= temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;

}


// print function 

void print(Node* &head){
   Node* temp = head;
   while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
   }
}

void InsertAtHead(Node* &head, int data){
  if(head== NULL){
    Node* newnode = new Node(data);
    head = newnode;
    return ;
  }
  // create a new node
    Node* newnode = new Node(data);
    newnode->next = head;
    head = newnode;

}


int main(){
    Node*head= NULL;
    // Node* head = new Node(1);
    // Node* second = new Node(2);
    // Node* third = new Node(3);
    // Node* forth = new Node(2);
    // Node* fifth = new Node(1);


    // head->next = second;
    // second->next = third;
    // third->next = forth;
    // forth->next= fifth;
    // fifth->next = NULL;

//    bool ispalindrom =  checkPlaindrom(head);
//    if(ispalindrom){
//     cout<<" Given  LL is palindrome";
//    }
//    else{
//     cout<<"Given linled List is Not a palindrom";
//    }


 InsertAtHead(head , 4);
 InsertAtHead(head , 3);
 InsertAtHead(head , 2);
 InsertAtHead(head , 1);
 print(head);

}