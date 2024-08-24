#include <iostream>

int main(){

    int a = 5;

    int *ref = &a;

    int *pt;

    std::cout << pt <<" -> " << sizeof(pt) << std::endl;

    std::cout << *ref <<" -> " << a << std::endl;

}