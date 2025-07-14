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

//  
  //    Approch  -> 1
  void CountZeroOneTwo(Node* &head){
   //  step count zero , ones, and twos
    int zeros = 0;
    int ones = 0;
    int twos = 0;

    Node* temp =head;
    while(temp != NULL){
        if(temp->data == 0){
            zeros++;
        }
        else if( temp -> data == 1){
            ones++ ;
        }
        else if(temp->data == 2){
            twos++;
        }
    temp = temp->next;
    }
   
    // step :2 replace the value 

    temp =head;
    // replace by 0 
    while(zeros--){
        temp->data = 0;
        temp = temp->next;
    }
    // replace by 1 
    
     while(ones--){
        temp->data = 1;
        temp = temp->next;

    }

    // replace by 2 
    while(twos--){
        temp->data = 2;
        temp = temp->next;

    }


  }

  //   Approch -> 2 
  // without data replacement 

  Node* Sort2(Node* &head){
    // create a dummy node 
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

     Node* twoHead = new Node(-1);
    Node* twoTail = twoHead ;  
    
    // traverse linked list
    Node* curr= head;
    while(curr != NULL){
        // data = 0
     if(curr->data== 0){
        // tack out Zero wali node 
      Node* temp = curr;
      curr= curr->next;
      temp->next = NULL; 
       
      // append to zero node in zeroHead LL
      zeroTail->next = temp ;
      zeroTail = temp;
     } 
     // data = 1
     else if(curr->data== 1){
            // tack out Zero wali node 
      Node* temp = curr;
      curr= curr->next;
      temp->next = NULL; 
       
      // append to zero node in zeroHead LL
      oneTail->next = temp ;
      oneTail = temp;

     } 
     // data =2
     else if(curr->data== 2){
            // tack out Zero wali node 
      Node* temp = curr;
      curr= curr->next;
      temp->next = NULL; 
       
      // append to zero node in zeroHead LL
      twoTail->next = temp ;
      twoTail = temp;

     } 
    }
    // ab yha per zero , one , two , tenoo ll ready hai

    // join them 


    // remove dummy nodes

    // modify oneHead wali node
    Node* temp = oneHead;
    oneHead= oneHead->next;
    temp->next =NULL; 
    delete temp;

    // modify two wali node
     temp = twoHead;
    twoHead= twoHead->next;
    temp->next = NULL;
    delete temp;

    // join modify nodes
    if (oneHead != NULL){
        // one wali node is non empty
        zeroTail->next = oneHead;
        if(twoHead != NULL){
            oneTail->next = twoHead;
        }
    }
    else{
        // one wali node is empty
        if(twoHead != NULL){
            zeroTail->next = twoHead;
        }
    }

    // now remove extra node 
       temp = zeroHead;
    zeroHead= zeroHead->next;
    temp ->next = NULL;
    delete temp;
    // return head of the modified linked list

    return zeroHead;
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
    Node* third = new Node(0);
    Node* forth = new Node(0);
    Node* fifth = new Node(1);
    Node* sixth = new Node(1);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
  
  print(head);
      cout<<endl;
    //    CountZeroOneTwo(head);
    //   print(head);


   Node* ZeroHead= Sort2(head);
   print (ZeroHead);

    return 0;
}
