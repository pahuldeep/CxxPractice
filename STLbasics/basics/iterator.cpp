#include <iostream>
#include <array>

using namespace std;

int main(){
    array<int, 5> my_array{1,2,3,4,5};

    cout << "Pointer called iterator: ";
    for(auto itr = my_array.begin(); itr < my_array.end(); itr++){
        cout << *itr << ' ';
    }
    cout << '\n';
    return 0;
}