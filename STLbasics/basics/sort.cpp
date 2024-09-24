#include<iostream>
#include<algorithm>
#include<array>

template<typename my_auto>

void print(my_auto array){
    for(auto value: array){
        std::cout<< value << " ";
    }
    std::cout<< '\n';
}

int main(){
    std::array<int, 5> my_array = {12, 31, 44, 1, 2};
    print(my_array);

    std::sort(my_array.begin(), my_array.end());
    print(my_array);

}