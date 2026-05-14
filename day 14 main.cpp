//problem -- 1 
//insert the data at the head of the linked list
#include<iostream>
using namespace std;

class Node{
 public:   
    int data;
    Node * next;
    
    Node (int new_data) {
         this -> data = new_data;
         this -> next = nullptr;
    }
};

Node * head = nullptr;

void insertathead(int data){
    Node * newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}
void display() {
    Node * temp = head;
    while(temp != nullptr) {
       cout << temp->data << " ";
       temp = temp->next;
    }
    cout << "NULL";
}

int main(){
    Node * head = new Node(10);
    head -> next = new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    insertathead(5);
    display();
    return 0;
}




//problem -- 2
//insert the data at the tail of linked list
#include<iostream>
using namespace std;

class Node{
 public:   
    int data;
    Node * next;
    
    Node (int new_data) {
         this -> data = new_data;
         this -> next = nullptr;
    }
};

Node * head = nullptr;

void insertattail(int data){
    Node * newNode = new Node(data);
    newNode -> next = head;
    head = newNode;
}
void display() {
    Node * temp = head;
    while(temp != nullptr) {
       cout << temp->data << " ";
       temp = temp->next;
    }
    cout << "NULL";
}

int main(){
    Node * head = new Node(10);
    head -> next = new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);
    insertattail(50);
    display();
    return 0;
}

