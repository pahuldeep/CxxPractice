#include <iostream>

using namespace std;

int main(){

    int x, y;
    
    cout << "First Integer: ";
    cin >> x;

    cout << "Second Integer: ";
    cin >> y;

    auto max = [](auto x, auto y) -> auto { return x > y ? x: y; };
    auto largerNumber = max(x, y);

    cout << "The larger number is: " << largerNumber ;
}