#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <iomanip>

using namespace std;

template <typename generator>

void histogram(size_t partition, size_t sample){
    using rand_t = typename generator::result_type;
    
    partition = max<size_t>(partition, 10);

    generator rd;
    rand_t div ((double(generator::max()) + 1) / partition);
}



int main(){
    return 0;
}