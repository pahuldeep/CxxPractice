#include<bits/stdc++.h>

using namespace std;

int main(){
    array<int, 5> my_array{1,2,3,4,5};

    for(auto itr = my_array.rbegin(); itr < my_array.rend(); itr++){
        cout << *itr << ' ';
    }
    cout << '\n';


    return 0;
}