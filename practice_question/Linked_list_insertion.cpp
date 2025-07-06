#include<iostream> 
using namespace std; 

class Node{
    public:
    int data;
    Node* next;
  
    Node(){
        this-> data =0;
        this-> next=NULL;

    }
    Node(int data){
        this-> data = data;
        this->next =NULL;
    }
};
  
void insertAtNode(Node* &head , Node* &tail, int data){

    
//  check for empty linled list 
  
  if(head == NULL){
    // step 1 create a new node
    Node* newnode= new Node(data);
    
    // step 2
    head = newnode;

    // step 3 
    tail = newnode;
    return;
  }

    // step -1 
    Node* newnode= new Node(data);

    // step 2
    newnode->next= head;

    // step 3
    head = newnode;
}

// i want to insert a node right at the end of linked list 
void InsertAtTail( Node* &head,Node* &tail , int data){

   
//  check for empty linled list 
  
  if(head == NULL){
    // step 1 create a new node
    Node* newnode= new Node(data);
    
    // step 2
    head = newnode;

    // step 3 
    tail = newnode;
    return;
  }
    // step 1  creat a new node
    Node* newnode= new Node(data);

    // step 2 
    tail->next= newnode;

    // step 3
    tail = newnode;

}

void print(Node* head){
    Node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main(){
    Node* head =NULL;
    Node* tail= NULL;
    insertAtNode(head,tail , 10);
    insertAtNode(head,tail , 20);
    insertAtNode(head ,tail, 30);
    insertAtNode(head ,tail, 40);
    insertAtNode(head ,tail, 50);
    InsertAtTail(head ,tail, 55);

    print(head);
}