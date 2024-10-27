#include<iostream>
#include <array>

void print(std::array<int, 3> array){
    for(auto i: array){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
}

void print(std::array<float, 3> array){
    for(auto i: array){
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
}

int main(){
    std::array<int, 3> my_int = {1,2,3};
    print(my_int);

    std::array<float, 3> my_float = {1.1f, 2.2f, 3.3f};
    print(my_float);
}