#include <iostream>
class A {
public:
    virtual void print(){
        std::cout << "A" << std::endl;
    }
};

class B : public A {
public:
    void print() {
        std::cout << "B" << std::endl;
    }
};

int main() {
    A* obj = new B; // here create object B
    obj->print();
}
