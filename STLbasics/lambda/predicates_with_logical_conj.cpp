#include <iostream>
#include <functional>
#include <string>
#include <iterator>
#include <algorithm>
#include <sstream>


using namespace std;

static bool begins_with_a(const string &s){
    return s.find("a") == 0;
}

static bool ends_with_b(const string &s){
    return s.rfind("b") == s.length() - 1;   
}

template<typename A, typename B, typename F>

auto combine(F binary, A a, B b){
    return [=](auto params){return binary(a(params), b(params)); };
}

int main(){
    auto a_xxx_b(combine(logical_and<>{}, begins_with_a, ends_with_b));
    
    stringstream ss;
	ss << "accb ass ab axxxb";

    copy_if(istream_iterator<string>{ss}, {},
			ostream_iterator<string>{cout, ", "},
			a_xxx_b);
    cout << "\n";  

    // string input;
    // while (cin >> input) {
    //     if (a_xxx_b(input)) {
    //         cout << input << ", ";
    //         cout.flush(); // Flush output buffer for immediate display
    //     }
    // }
    // cout << "\n";


    // copy_if(istream_iterator<string>{cin}, {}, 
    //         ostream_iterator<string>{cout, ", "}, 
    //         a_xxx_b);
    // cout << "\n";

}