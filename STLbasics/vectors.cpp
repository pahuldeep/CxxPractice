#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{1, 2, 3, 2, 5, 2, 6, 2, 4, 8};

    // // example removing 2's from vector
    // const auto new_end(remove(begin(v), end(v), 2));
    // v.erase(new_end, end(v));

    // // example removing unique values
    // sort(v.begin(), v.end());
    // v.erase(unique(v.begin(), v.end()), v.end());

    // example removing odd's from vector
    const auto isOdd([](int i) { return i % 2 != 0; });     // using lambda functions
    v.erase(remove_if(begin(v), end(v), isOdd), end(v));
    v.shrink_to_fit();

    for (auto i : v){ cout << i << ", "; }
    cout << "\n";
    return 0;
}