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

Node* ReverseKNodes(Node* head, int k){
    if(head == NULL){
        cout << "Linked list is empty" << endl;
        return NULL;
    }

    if(head->next == NULL){
        return head;
    }

    // Step A: Reverse first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    int count = 0;
    while(count < k && curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // Step B: Recurse for the rest of the list
    if(forward != NULL){
        head->next = ReverseKNodes(forward, k);
    }

    // Step C: Return new head of the reversed part
    return prev;
}

int main(){
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;

    cout << "Original list: ";
    print(first);

    // Important: assign the returned head
    first = ReverseKNodes(first,7);

    cout << "Reversed in k-groups: ";
    print(first);

    return 0;
}
