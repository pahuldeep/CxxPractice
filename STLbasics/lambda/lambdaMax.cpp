#include <iostream>

using namespace std;

int main(){

    int x, y;
    
    cout << "First Integer: "; cin >> x;
    cout << "Second Integer: "; cin >> y;

    auto max = [](auto x, auto y) -> auto { return x > y ? x: y; };
    auto largerNumber = max(x, y);

    cout << "The larger number is: " << largerNumber ;

    auto min = [](auto x, auto y) {return x < y ? x: y;};
    auto smallestNumber = min(x, y);

    cout << "\nThe Smallest number is: "<< smallestNumber;
}