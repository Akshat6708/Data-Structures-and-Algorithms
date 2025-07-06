#include<iostream>
using namespace std;
class Node{
    public:
     int data; 
     Node* prev ; 
     Node* next ;

     Node(){
        this -> data = 0; 
        this-> prev = NULL;
        this-> next = NULL;
     }
     Node(int data ){
        this->data= data;
           this-> prev = NULL;
        this-> next = NULL;
     }
};

void print(Node* &head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
       
    }
}

//  find length 

int Findlen(Node* &head){
    int len = 0;
    Node* temp = head; 
    while(temp != NULL){
        temp= temp->next ;
        len++;
    }
    return len ;
}

// insertion  at head 

void InsertAtHead(Node* &head, Node*&tail, int data){
    // if lilked list is empty
    if(head==NULL){
        Node* newnode = new Node(data);
        head = newnode;
        tail = newnode;
    }
    else{ 
        // lL is non empty 
        // step 1 create a new node 
        Node* newnode= new Node(data);
        // step 2 
        newnode->next= head; 
       // step 3 
       head->prev= newnode;
       // step 4 
       head = newnode;
    }
}

// insertion at tail 

void InsertAtTail(Node* &head , Node* &tail , int data){
    // if ll is empty 
    if(head ==NULL){
        Node* newnode= new Node(data);
        head =newnode;
        tail = newnode;
    }
     else{
        //step 1  create a new node
     Node* newnode= new Node(data);
     // step 2 
     tail->next= newnode;
     // step -3 
     newnode->prev= tail; 
     // step 4 
     tail = newnode;
    }
   
}

//  insertion at position 

void InsertAtPosition(Node* &head , Node* &tail , int data , int position){

  if(head ==NULL){
        Node* newnode= new Node(data);
        head =newnode;
        tail = newnode;
    }

    // if position ==1
    if(position == 1){
        InsertAtHead(head , tail , data);
        return ;
    }
     int len = Findlen(head);
     if(position > len ){
        InsertAtTail(head , tail ,data);
        return ;
     }
     // insertion at middle
   // step 1 find prevNode & curr
     int i=1; 
    Node* prevNode = head;
    while(i< position-1){
        prevNode = prevNode->next;
     i++;
    }
    Node* curr = prevNode->next;
     // step 2 create a new node 
     Node* newnode = new Node(data);

     //step 3
     prevNode->next= newnode;
     newnode->prev=prevNode;
     
     // step 4 
     curr->prev=newnode;
     newnode->next= curr;

}

int main(){
   Node* first = new Node(10);
   Node* second = new Node(20);
   Node* third = new Node(30);

   Node* head =first;
   Node* tail = third;


  // connect all the nodes 

   first->next = second;
   second->prev = first;

   second->next=third ;
   third->prev= second;

   print(first);
   cout<<endl ; 
//   InsertAtHead(head ,tail , 55);
//   print(head);

// InsertAtTail(head, tail , 500);
// print(head);

InsertAtPosition(head , tail , 99,5);
print(head);
    return 0 ;
}