#include <iostream>
#include <unordered_set> // for hash method

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int value): data(value), next(nullptr){}
};

class singlelist{
private: Node *head;
public:
    singlelist(): head(nullptr){}

    void insert_back(int value){
        Node *new_node = new Node(value);
        if(head == nullptr){    
            head = new_node;
            return;
        }

        Node *temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new_node;
    }

    void display(){
        Node *temp = head;
        while(temp!=nullptr){
            cout << temp->data <<" > ";
            temp = temp->next;
        }
        cout << "nullptr\n";
    }

    Node *get_current(){
        return head;
    }

    static Node *find_intersection(singlelist &a, singlelist &b){
        unordered_set<Node*> node_set;

        Node *current = a.head;     // first list
        while(current){
            node_set.insert(current);
            current = current->next;
        }

        Node *alternative = b.head; // second list
        while(alternative){
            if(node_set.find(alternative) != node_set.end()){
                return alternative;
            }
            alternative = alternative->next;
        }
        return nullptr;
    }

    ~singlelist(){
        while(head){
            Node *next = head->next;
            delete head;
            head = next;
        }
    }
};

int main(){
    singlelist earth;
    singlelist planetX;

    Node *earth_population;
    Node *planetX_population;

    earth.insert_back(1000);
    earth.insert_back(2000);
    earth.insert_back(3000);
    earth.display();

    planetX.insert_back(1000);
    planetX.insert_back(2000);
    planetX.insert_back(3000);
    planetX.display();


    earth_population = earth.get_current();
    planetX_population = planetX.get_current();

    // make a intersection
    earth_population->next = planetX_population->next;

    Node *intersect = singlelist::find_intersection(earth, planetX);

    cout << "Intersection: " << (intersect ? to_string(intersect->data) : "No Intersection") << std::endl;


}