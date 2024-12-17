/* Static polymorphism allows the compiler to resolve method calls at compile time

@brief:
- Base Class: Container
A generic class that works with any data type T.(basically templates)
It provides methods to add and remove items, encapsulate data, and get the size of the container.

- Derived Classes: Cluster and Partition
cluster is a container of size_t elements (essentially integers).
Partition is a container of cluster objects.

@Methods:

add_item(const T& item): Adds an item to the container.

remove_item(const T& item): Removes an item from the container if it exists.

data() const: Returns a reference to the vector of items.

size() const: Returns the size of the container. 


*/

#include <iostream>
#include <vector>

using namespace std;

template<typename T>

class Container{
protected:
    Container(){}
    vector<T> _items;

public:
    const vector<T> &data() const{ return _items; } // encapsulate item
    size_t size() const{ return _items.size(); } // get item size

    void add_item(const T& item){
        _items.push_back(item);
    }

    void remove_item(const T& item){
        typename vector<T>::iterator it = find(_items.begin(), _items.end(), item);
        if(it != _items.end()){ _items.erase(it); } 
    }
};

class cluster: public Container<size_t>{};
class Partition: public Container<cluster>{};

int main(){
    cluster c1, c2;
    for(auto i = 0; i < 5; i++){
        c1.add_item(i);
    }
    for(auto i = 0; i < 5; i++){
        c2.add_item(i + 5);
    }

    c2.remove_item(8);

    Partition p;
    p.add_item(c1);
    p.add_item(c2);

    cout << "partition size: " << p.size() << "\n";

    vector<cluster> sc = p.data();
    for(auto i = 0; i < sc.size(); i++){
        cout << "Cluster index: " << i ;
        vector<size_t> ss = sc[i].data();

        for(auto j: ss){
            cout << j;
        }
        cout << "\n";
    }
}
