#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int value): data(value), next(nullptr){}
};

class singlelist{
private: 
    Node *head;
public: 
    singlelist(): head(nullptr){}

    void insertBack(int value){
        Node *new_node = new Node(value);
        if(head == nullptr){
            head = new_node;
        }
        else{        
            Node *current = head;
            while(current->next != nullptr){
                current = current->next;
            }
            current->next = new_node;
        }
    }

    void display(){
        Node *current = head;
        while(current != nullptr){
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }

    // reverse method
    void reverse(){
        Node *before = nullptr;
        Node *current = head;
        Node *after = nullptr;

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
    singlelist list;

    list.insertBack(1);
    list.insertBack(2);
    list.insertBack(3);

    list.display();

    list.reverse();

    list.display();

}