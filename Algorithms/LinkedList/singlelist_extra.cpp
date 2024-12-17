#include <iostream>
using namespace std;

struct Node{ int data; Node *next; Node(int value): data(value), next(nullptr){}};

class Singlelist{
private:
    Node *head;
public:
    Singlelist(): head(nullptr){}
    ~Singlelist(){
        Node *temp = head;
        while(temp!=nullptr){
            Node *next = temp->next;
            delete temp;
            temp = next;
        }
    }

    void insertfront(int value){
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }
};
