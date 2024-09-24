#include<iostream>
#include<algorithm>
#include<iterator>

#include<random>
#include<vector>

using namespace std;

static void print(const vector<int> &v){
    copy(begin(v), end(v), ostream_iterator<int>{cout, ", "});
}

int main(){
    vector<int> v { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    random_device rd;
    mt19937 random{ rd() };

    // checking
    cout << is_sorted(begin(v), end(v)) << "\n";
    shuffle(begin(v), end(v), random);
    cout << is_sorted(begin(v), end(v)) << "\n";

    // sorting
    print(v);
    sort(begin(v), end(v));
    cout << "\n"; print(v);

    // partition 
    shuffle(begin(v), end(v), random);
    partition(begin(v), end(v), [](int i){ return i <= 5;});
    cout << "\n"; print(v);

}