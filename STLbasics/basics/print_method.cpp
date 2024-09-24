#include <iostream>
#include <vector>
#include <random>

using namespace std;

int main() {
    vector<int> array(10);

    // Print the generated random numbers
    copy(array.begin(), array.end(), ostream_iterator<int>{cout, " "});
    
    return 0;
}