#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

class singlelist
{
    Node *head;

public:
    singlelist() : head(nullptr) {}
    ~singlelist()
    {
        while (head)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
    }
    void display();

    void init_append(int value);
    void append(int value);

    void deleteNode(int value);

    int lenght();
    bool search(int value);
    
    void reverse();
    void insertAt(int value);
};

void singlelist::display()
{
    Node *temp = head;
    while (temp != nullptr){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

bool singlelist::search(int value){
    Node *temp = head;
    while(temp != nullptr){
        if(temp->data == value) return true;
        temp = temp->next;
    }
    return false;
}

void singlelist::init_append(int value)
{
    Node *new_node = new Node(value);
    new_node->next = head;
    head = new_node;
}

void singlelist::append(int value)
{
    Node *new_node = new Node(value);
    if (head == nullptr)
    {
        head = new_node;
    }
    Node *temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}

void singlelist::deleteNode(int value){
    if(head == nullptr) return;

    if(head->data == value){
        Node *node_delete = head;
        head = head->next;
        delete node_delete;
    }

    Node *temp = head;
    while(temp->next != nullptr && temp->next->data != value){
        temp = temp->next;
    }

    if(temp->next != nullptr){
        Node *node_delete = temp->next;
        temp->next = temp->next->next;
        delete node_delete;
    }
}

void singlelist::reverse(){
    Node *prev = nullptr;
    Node *current = head;
    Node *next = nullptr;
    while(current != nullptr){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}

int main()
{
    singlelist list;

    list.init_append(1);
    list.append(2);
    list.append(3);

    list.display();

    list.deleteNode(1);

    list.reverse();
    list.display();
    
}