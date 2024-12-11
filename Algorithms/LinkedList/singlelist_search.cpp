#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node *next;

    Node(int value): data(value), next(nullptr){}
};

class singlelist{
private: 
    Node *head;
public:
    singlelist() : head(nullptr){}

    void insert(int value){
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    // iterative
    bool search_iterative(int key){
        Node *current = head;
        while(current->next != nullptr){
            if(key == current->data){
                return true;
            }
            current = current->next;
        }
        return false;
    }

    // recursive
    bool search(Node *current, int key){
        if(current == nullptr) return false;
        if(current->data == key) return true;
        
        return search(current->next, key);
    }
    bool search_recursive(int key){
        Node *current = head;
        return search(current, key);
    }
};

int main(){

    singlelist list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.insert(4);

    list.search_iterative(5) ? cout << "exist" : cout << "create one";
    list.search_recursive(6) ? cout << "\nexist" : cout << "\ncreate one";
}