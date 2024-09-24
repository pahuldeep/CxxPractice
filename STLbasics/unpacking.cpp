#include <iostream>
using namespace std;


int main(){

    /* basic method */
    pair<int, int> divide_remainder(int dividend, int divisor);
    const auto result(divide_remainder(16, 3));

    cout << result.first << result.second;
}