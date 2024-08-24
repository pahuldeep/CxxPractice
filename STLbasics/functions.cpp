#include<array>
#include<iostream>

void print_array(std::array<int, 3> my_array){
    for (int i : my_array){
        std::cout << i << "\n";
    }
}

long int sum_array(std::array<int, 3> my_array){
    auto sum = 0;
    for(int i: my_array){
        sum+=i;
    }
    return sum;
}

int main(){
    std::array<int, 3> array_obj = {1, 4, 3};
    print_array(array_obj);

    auto result = sum_array(array_obj);
    std::cout << "The sum of all elements: " << result << std::endl;
}