#include <bits/stdc++.h>
#include <tuple>

using namespace std;

namespace std{
    ostream& operator<<(ostream &os, const pair<int, string> &p){
        return os << "(" << p.first << "," << p.second << ")";
    }
}

int main(){

    map<int, string> m;
    vector<pair<int, string>> v{
        {1, "one"}, {2, "two"}, {3, "three"}, {4, "four"}, {5, "five"}
    };

    copy_n(begin(v), 3, inserter(m, begin(m)));  // copy items value into map using inserter
    
    auto shell_iter(ostream_iterator<pair<int, string>>{ cout, ", " });
    copy(begin(m), end(m), shell_iter);
    cout << "\n";

    m.clear(); // after copy test
    move(begin(v), end(v), inserter(m, begin(m)));  // moves items value into map

    copy(begin(m), end(m), shell_iter);
    cout << "\n";
    copy(begin(v), end(v), shell_iter);

}