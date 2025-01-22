#include <iostream>
using namespace std;
struct Node{
    string data;
    Node *next;
    Node(string value) : data(value), next(nullptr){}
};

class singleList{
private:
    Node *head;
public:
    singleList(): head(nullptr) { }

    void transfer_from(Node *list){
        head = list;
    }

    void display(){
        Node *temp = head;
        while(temp!=nullptr){
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr\n";
    }

    void insert_front(string value){
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    ~singleList(){
        while(head!=nullptr){
            Node *next = head->next;
            delete head;
            head = next; 
        }
    }
};

int main(){
    // manual uploading
    Node *list = new Node("pahul");

    list->next = new Node("hanuman");
    list->next->next = new Node("ram");
    list->next->next->next = new Node("raaj");
    list->next->next->next->next = new Node("simran");

    // transfering to single_list
    singleList slist;
    slist.transfer_from(list);

    slist.display();

    slist.insert_front("new comer");
    slist.display();

    // Clean up the manually created list
    while (list != nullptr) {
        Node *next = list->next;
        delete list;
        list = next;
    }

}