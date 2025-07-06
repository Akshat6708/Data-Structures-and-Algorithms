#include<iostream> 
using namespace std ;

class node{
    public:
    int data; 
     node* next;

    node(){
        this -> data= 0;
        this ->next= NULL;
    }
    node(int data){
        this->data = data;
        this->next = NULL;
    }

};

// i want to insert a node right at the head of linked list 
void insretAtHead(node* &head , int data){

  //  step ->1 : create a new node 
      node * newNode = new node(data);
    
  // step -> 2; new node ke next ko head ke saath attach ker do 
   
  newNode -> next = head;

  // step -> 3 : head ko starting me le aavo 
    
  head = newNode;

}  

void print (node* head){
   node* temp = head;
   while(temp != NULL){
    cout<<temp->data<<" ";
    temp= temp->next;
   }
}


int main(){
    node* head =NULL;
    insretAtHead(head, 20);
    insretAtHead(head, 30);
    insretAtHead(head , 40);
    insretAtHead(head, 50);
    insretAtHead(head ,60);
    print(head);

}