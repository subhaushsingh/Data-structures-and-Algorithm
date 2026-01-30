#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Node{
    public:
        T data;
        Node<T>* next;
};

template <typename T>
class LL
{
public:
    LL(T val);
    void PrintLL(Node<T>* head);
    ~LL();
};

template <typename T>
LL<T>::LL(T val)
{
    data = val;
    next = nullptr;
}

template <typename T>
void LL<T>::PrintLL(Node<T>* head) {
    Node<T>* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


template <typename T>
LL<T>::~LL()
{
    Node<T>* curr = head;
    while (curr) {
        Node<T>* temp = curr;
        curr = curr->next;
        delete temp;
    }
}




