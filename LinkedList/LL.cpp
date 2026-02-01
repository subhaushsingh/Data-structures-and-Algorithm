#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node {
public:
    T data;
    Node<T>* next; //self referencing class

    Node(T val) {
        data = val;
        next = nullptr;
    }
};

template <typename T>
class LL {
private:
    Node<T>* head;
    void traverseRecursive(Node<T>* temp);
    void traverseRecursiveReverse(Node<T>* temp);
    void reverseLLrecursion(Node<T>* q,Node<T>* p);

public:
    LL();                 // constructor
    void insert(T val);   // add node
    void traverse();      // TRAVERSE
    void traverseRecursive();
    void traverseRecursiveReverse();
    void reverseLL();
    void reverseLLrecursion();
    ~LL();                // destructor
};

template <typename T>
LL<T>::LL() {
    head = nullptr;
}

template <typename T>
void LL<T>::insert(T val) {
    Node<T>* newNode = new Node<T>(val);
    if (!head) {
        head = newNode;
        return;
    }
    Node<T>* temp = head;
    while (temp->next)
        temp = temp->next;
    temp->next = newNode;
}

template <typename T>
void LL<T>::traverse() {
    Node<T>* temp = head;
    while (temp!=nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}




template <typename T>
void LL<T>::traverseRecursive(Node<T>* temp){
    if(temp==nullptr) return;
    cout << temp->data<<" ";
    traverseRecursive(temp->next); 
}
template <typename T>
void LL<T>::traverseRecursive(){
    traverseRecursive(head);
}


template <typename T>
void LL<T>::traverseRecursiveReverse(Node<T>* temp){
    if(temp!=nullptr){ 
    traverseRecursiveReverse(temp->next); 
    cout << temp->data<<" ";}
}
template <typename T>
void LL<T>::traverseRecursiveReverse(){
    traverseRecursiveReverse(head);
}

template <typename T>
void LL<T>::reverseLL(){
    if (!head || !head->next) return;
    Node<T>* s=head;
    Node<T>* f = s->next;
    Node<T>* h=f->next;
    s->next = nullptr; 
    while(f){
        f->next=s;
        s=f;
        f=h;
        if(h)
            h=h->next;
    }
    head=s;
}

template <typename T>
void LL<T>::reverseLLrecursion(Node<T>* q,Node<T>* p){
    if(p){
        reverseLLrecursion(p,p->next);
        p->next=q;
    }
    else{
        head=q;
    }
}

template <typename T>
void LL<T>::reverseLLrecursion() {
    reverseLLrecursion(nullptr, head);
}


template <typename T>
LL<T>::~LL() {
    Node<T>* curr = head;
    while (curr) {
        Node<T>* temp = curr;
        curr = curr->next;
        delete temp;
    }
}



int main() {
    LL<int> list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.insert(40);
    list.insert(50);

    list.reverseLLrecursion();
    list.traverse(); 
}
