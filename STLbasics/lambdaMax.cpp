#include <iostream>

using namespace std;

int main(){

    int x, y;
    
    cout << "First Integer: ";
    cin >> x;

    cout << "Second Integer: ";
    cin >> y;

    auto max = [](int x, int y) -> int { return x > y ? x: y; };

    int largerNumber = max(x, y);

    cout << "The larger number is: " << largerNumber ;
}