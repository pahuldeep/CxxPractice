#include<iostream>
#include<vector>
#include<string>

using namespace std;

// create a node data
struct Node{
    int data;
    Node *next;
    Node(int value): data(value), next(nullptr) {}
};

// create a single list
class LinkedList{

private:
    Node *head;

public:
    LinkedList() : head(nullptr){}

    // front insert
    void insertBegin(int value){
        Node *new_node = new Node(value);

        new_node->next = head;
        head = new_node;
    }

    // delete from front [first occurrence]
    void deleteFront(int value){
        if (head == nullptr) return;

        if(head->data == value){
            Node *temp = head;
            head = head->next;
            delete temp;
        } 

        Node *current = head;
        while(current->next != nullptr && current->next->data != value){
            current = current->next;
        }

        if(current->next != nullptr){
            Node *temp = current->next;
            current->next = current->next->next;
            delete temp;
        }
    }
    
    // traverse and display
    void display(){
        Node *current = head;
        
        cout << "List Display: ";
        while(current != nullptr){
            cout <<  current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }

    ~LinkedList(){}
};

int main(){
    LinkedList list;
    
    list.insertBegin(1);
    list.insertBegin(2);
    list.insertBegin(3);

    list.display();

    list.deleteFront(1);

    list.display();
    
}