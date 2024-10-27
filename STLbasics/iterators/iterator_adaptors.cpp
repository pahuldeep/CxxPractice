#include <iostream>

#include <string>
#include <sstream>
#include <iterator>
#include <deque>

using namespace std;

int main(){
    istream_iterator<int> begin_cin { cin };
    istream_iterator<int> end_cin;

    deque<int> v;

    copy(begin_cin, end_cin, back_inserter(v));

    istringstream sstr {" 123 456 789 "};
    auto deque_middle (next(begin(v), static_cast<int>(v.size()) / 2));
    
    copy(istream_iterator<int>{sstr}, {}, inserter(v, deque_middle));
}