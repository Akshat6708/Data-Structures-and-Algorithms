// #include<iostream>
// using namespace std;

// class Node{
// public: 
//     int data; 
//     Node* next;

//     Node(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };

// void print(Node* head){
//     Node* temp = head;
//     while(temp != NULL){
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
//     cout << endl;
// }
// bool findloop(Node* head){
//     if(head==NULL){
//         return false;
//     }
//     Node* slow= head;
//     Node* fast= head;
//     while(fast != NULL){
//      fast = fast->next;
//      if(fast != NULL){
//      fast= fast->next;
//      slow= slow->next;
//      }
//      if(slow==fast){
//        return true;
       
//      }
//     }
//   return false;

// }


// int main(){
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* forth = new Node(40);
//     Node* fifth = new Node(50);
//     Node* sixth = new Node(60);
//     Node* seventh= new Node(70);
//     Node* eighth= new Node(80);

//     first->next = second;
//     second->next = third;
//     third->next = forth;
//     forth->next = fifth;
//     fifth->next = sixth;
//     sixth->next = seventh;
//     seventh->next= eighth;
//     // eighth->next = fifth;
//     eighth->next = NULL;


//   cout<<"loop is present or absent "<<findloop(first);

//     return 0;
// }


//  find starting loop node 


#include<iostream>
using namespace std;

class Node{
public: 
    int data; 
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void print(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node* FindFirstLoopNode(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* slow= head;
    Node* fast= head;
    while(fast != NULL){
     fast = fast->next;
     if(fast != NULL){
     fast= fast->next;
     slow= slow->next;
     }
     if(slow==fast){
      slow = head; 
      break;
     }
    }
    while(slow != fast){
        fast= fast->next;
        slow = slow->next;
    }
    return slow;
}

// remove loop in the linked list 
void RemoveLoopInLL(Node* head){
    if(head==NULL){
        return ;
    }
    Node* slow= head;
    Node* fast= head;
    while(fast != NULL){
     fast = fast->next;
     if(fast != NULL){
     fast= fast->next;
     slow= slow->next;
     }

     if(slow==fast){
      slow = head;
    
      break;
     } 
}
     Node* prev = fast; 
   while(slow != fast){
      prev= fast;
        fast= fast->next;
        slow = slow->next;
      
    }
    prev->next= NULL;

}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh= new Node(70);
    Node* eighth= new Node(80);

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next= eighth;
    eighth->next = forth;
    // eighth->next = NULL;

//    cout<<"first looping node is "<<FindFirstLoopNode(first)->data;

RemoveLoopInLL(first);
print(first);
 
    return 0;
}
