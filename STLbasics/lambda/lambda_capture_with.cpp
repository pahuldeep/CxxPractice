#include <iostream>
#include <vector>
#include <functional>

using namespace std;

int main(){
    vector<function<void(int)>> object;

    int multi = 5;
    /* capture variable */
    object.push_back( [multi](int x){ cout << "capture lambda: " << x * multi; } );

    /* without capture */
    object.push_back( [](int x) { cout << "\nnon-capture: " << x; } );

    for(auto &i: object){ i(10); }

    return 0;
}