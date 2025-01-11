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

    void insertfront(int value){
        Node *new_node = new Node(value);
        new_node->next = head;
        head = new_node;
    }

    void display(){
        Node *node = head;
        while(node != nullptr){
            cout << node->data << " ";
            node = node->next;
        }
        cout << "\n";
    }

    // move by k position
    void move(int k){
        if(head == nullptr || k == 0) return;

        // find length
        int lenght = 0;
        Node *current = head;
        while(current != nullptr){
            lenght++;
            current = current->next;
        }

        k = k % lenght; // normalize k
        if(k == 0) return;

        // find head and rotate
        current = head;
        for(int i = 1; i < lenght - k; i++){
            current = current->next;
        }

        Node *new_head = current->next;

        current->next = nullptr;
        current = new_head;

        while(current->next != nullptr){
            current = current->next;
        }
        current->next = head;
        head = new_head;
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

    void reverse_mini() {
        for ( Node *current = head, *previous = nullptr; current != nullptr; previous = head ){
            head = current;
            current = current->next; 
            head->next = previous;
        }
    }

    Node* reverse(Node *head){
        Node *current = head;
        Node *after = nullptr;
        Node *before = nullptr;

        while(current != nullptr){
            after = current->next;
            current->next = before;
            before = current;
            current = after;
        }
        return before;
    }



    // reverse alternatively
    void reverse_alter(){
        if(!head||!head->next) return;

        // split the list into odd and even
        Node *odd = head;

        Node *even = head->next;        
        Node *even_head = even;

        while(odd && even){
            odd->next = even->next;
            if(odd->next){
                even->next = odd->next->next;
            }
            odd = odd->next;
            even = even->next;
        }

        // reverse the even index
        even_head = reverse(even_head);

        // append even into odd end indexs
        odd = head;
        while(odd->next){
            odd = odd->next;
        }
        odd->next = even_head;

    }

};

int main(){
    singlelist list;

    list.insertfront(1);
    list.insertfront(2);
    list.insertfront(3);
    list.insertfront(4);
    list.insertfront(5);
    list.insertfront(6);
    list.display();

    list.reverse();
    list.display();
 
    list.reverse_alter();
    list.display();

    
    list.move(3);
    list.display();

    list.reverse_mini();
    list.display();
}