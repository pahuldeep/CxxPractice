#include <iostream>

using namespace std;

int main(){

    auto square = [](int x) { return x * x; };

    int result = square(5);
    cout << result << endl;
}