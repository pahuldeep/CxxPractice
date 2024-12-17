#include <iostream>

using namespace std;

struct Node{
    int data;
    Node *next;

    Node(int value): data(value), next(nullptr){} 
};

class Singlelist{
private:
    Node *head;
public:
    Singlelist(): head(nullptr){}

    void insertback(int value){
        Node *new_node = new Node(value);
        if(head == nullptr){
            head = new_node;
        }else{
        Node *current = head;
        while(current->next != nullptr){
            current = current->next;
        }
        current->next = new_node;
        }
    }

    void insertfront(int value){
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    void display(){
        Node *current = head;

        while(current != nullptr){
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }

    void deleteinfo(int value){
        if(head == nullptr) return;
        
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
    void reverse(){
        Node *after = nullptr;
        Node *current = head;
        Node *before = nullptr;

        while(current != nullptr){
            after = current->next;
            current->next = before;
            before = current;
            current = after;
        }
        head = before;
    }
};

int main(){
    Singlelist list;

    list.insertback(1);
    list.insertback(2);
    list.insertback(3);
    list.insertback(4);

    list.display();
    list.deleteinfo(4);
    list.display();

    list.reverse();
    list.display();

}