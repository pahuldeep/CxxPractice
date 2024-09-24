#include <vector>
#include <algorithm>
#include <iostream>

#include <random>

using namespace std;

int main(){
    vector<int> list(10);

    random_device device;
    uniform_int_distribution<int> distribution(0, 10);
    mt19937 generator(device());
    
    /* using lambda expression */
    generate(list.begin(), list.end(), [&](){ return distribution(generator); });
    
    copy(list.begin(), list.end(), ostream_iterator<int>{cout, " "});
}