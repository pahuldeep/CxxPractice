#include <iostream>
#include <memory>

/* smart pointers */
int main(){

    //First way
    std::unique_ptr<int[]> ptr(new int[10]);

    for(int i = 0; i<10; i+=1){
        ptr[i] = i*i;
    }
    std::cout << ptr[2] << "\n";
    std::cout << ptr[4] << "\n";
    
    //Second way
    auto pt = std::make_unique<int[]> (10);

    for(int i = 0; i<10; i+=1){
        pt[i] = i*i;
    }
    std::cout << pt[2] << "\n";
    std::cout << pt[9] << "\n";
}