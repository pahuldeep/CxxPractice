#include <bits/stdc++.h>

using namespace std;

int main(){

    vector<int> v{10, 20, 40, 30};

    int sum{0};
    for(auto i: v){
        sum += i;
    }
    cout << sum << "\n";
    
    // or simiplified version
    cout << accumulate(begin(v), end(v), 0) << "\n";
}