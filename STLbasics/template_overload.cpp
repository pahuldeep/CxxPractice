#include<bits/stdc++.h>

using namespace std;

template<typename T>

void print_array(T array){
    for(auto i: array){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int main(){
    array<int, 3> my_int = {1,2,3};
    array<float, 3> my_float = {1.1f, 2.2f, 3.3f};

    print_array<array<int, 3>>(my_int);
    print_array<array<float, 3>>(my_float);
    // OR 
    print_array(my_int);
    print_array(my_float);
}
