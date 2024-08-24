#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <random>
#include <tuple>


#define endline "\n"

using namespace std;

static void print(const vector<int> &v){
    copy(begin(v), end(v), ostream_iterator<int>{cout , ", "});
}

int main(){
    
    vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    random_device rd;
    mt19937 g(rd());

    // custom data structure
    struct mypair{
        int a;
        int b;
    };

    vector<mypair> mv{ {5, 100}, {1, 50}, {-123, 1000}, {3, 70}, {-10, 20} };
    sort(begin(mv), end(mv), [](mypair &lhs,  mypair &rhs){ return lhs.b < rhs.b; });
    for ( auto &p : mv){
        cout<< "[" << p.a << ", " << p.b << "]" << endline;
    }
    cout << endline;

    // or use partial_sort
    shuffle(begin(v), end(v), g);
    auto mid(next(begin(v), int (v.size()) / 2));

    partial_sort(begin(v), mid, end(v));
    print(v);

}