#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<string, size_t> m = { {"b", 1}, {"c", 2}, {"d", 3} };

    m.insert(end(m), {"a", 1});
    
    for(auto &s: {"p", "q", "r", "s"}){
        m.insert(begin(m), {s, 1});
    }
    
    for(auto &p: m){
        cout << p.first << p.second << " " ;
    }
    
}