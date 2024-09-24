#include<iostream>
#include<array>

#define end "\n" 

int main()
{
    std::array<int, 3> my_array = {23, 21, 1};
    
    for (int i : my_array)
    {
        std::cout << i << end;
    }
}