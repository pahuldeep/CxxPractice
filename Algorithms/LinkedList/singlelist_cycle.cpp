#include <iostream>
using namespace std;

// create a node
class Node{
public:
    int data;
    Node *next;
    Node(int value) : data(value), next(nullptr) {}
};

class singleList{

private:
    // create init node
    Node *head;

public:
    // declare constructor
    singleList() : head(nullptr) {}

    // front insertion
    void insertFront(int value)
    {
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    // middle node
    Node *findMid(){
        if (head == nullptr) return nullptr;

        Node *slow = head;
        Node *fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << "Middle: "<< slow->data << "\n";
        return slow;
    }

    // floyd's cycle 
    bool hasCycle(){
        if(head == nullptr || head->next == nullptr) return false;

        Node *slow = head;
        Node *fast = head;

        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) return true;
        } 
        return false;
    }

    // display list
    void display(){
        Node *current = head;
        cout << "Display list: ";
        while (current != nullptr){
            cout << current->data << " ";
            current = current->next;
        }
        cout << "\n";
    }
    ~singleList() {}
};

int main()
{
    singleList list;

    list.insertFront(1);
    list.insertFront(2);
    list.insertFront(3);
    list.insertFront(4);
    list.insertFront(5);

    list.display();

    list.findMid();
    list.display();

    cout << list.hasCycle();
    
}