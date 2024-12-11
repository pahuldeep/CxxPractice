#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

class singleList{

private:
    Node *head;

public:
    singleList() : head(nullptr) {}

    void insertFront(int value){
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    void insertEnd(int value){
        Node *new_node = new Node(value);

        if(head == nullptr){
            head = new_node;
        }
        
        Node *current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = new_node;
    }

    void display(){
        Node *current = head;
        cout << "display list: ";
        while(current != nullptr){
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }

    ~singleList() {}
};

int main(){
    singleList list;

    list.insertFront(3);

    list.insertEnd(1);
    list.insertEnd(2);

    list.display();

}