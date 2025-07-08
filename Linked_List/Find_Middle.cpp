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

  ~Node(){
    cout<<"Node with value "<<this -> data <<" "<<"deleted "<<endl;
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

int Findlen(Node* &head){
  int len =0;
  Node* temp = head;
  while( temp != NULL){
    temp= temp->next;
    len++;
  }
  return len;
}

void InsertAtPosition( int position ,Node* &head , Node*& tail, int data){
// check linked list - empty or not 

if(head == NULL){
  Node* newnode= new Node(data);
  head = newnode;
  tail = newnode;
  return ; 
}

//   step 1 - find the position ( prev , curr)
 if(position == 0){
  insertAtNode(head , tail , data);
  return ;
 }   
 int len = Findlen(head);
 if(position >= len){
  InsertAtTail(head , tail , data);
  return ;
 } 

    int i=1; 
    Node* prev = head;
   while(i< position ){
    prev = prev->next;
    i++;
   }
   Node* curr = prev->next ;

   // step -2  create a newnodwe

   Node* newnode = new Node(data);

   // step 3 
   newnode->next = curr;

   // step 4 
   prev->next=newnode;
   

}
int FindMiddle(Node* head){
    // find length
    int length = Findlen(head);
    if(length % 2 == 0){
        length= length/ 2;
    }
    else{ 
        length = (length/ 2)+1;
    }
   
    return length;
}
 

int main(){
    Node* head =NULL;
    Node* tail= NULL; 
    insertAtNode(head,tail , 10);
    insertAtNode(head,tail , 20);
    insertAtNode(head ,tail, 30);
    insertAtNode(head ,tail, 40);
    // insertAtNode(head ,tail, 50);
   

        print(head);
    //     cout<<endl;
    // InsertAtPosition(3, head , tail ,395);
    //     print(head);
     cout<<endl;


   int middle=  FindMiddle(head);
   cout<<"The middle of the linked list is "<<middle<<" position Node"<<endl;
     

}