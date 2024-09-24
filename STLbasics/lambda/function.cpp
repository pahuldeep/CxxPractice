/* lambda expression can [encapsulate code] for later run */
#include <iostream>
#include <string>
using namespace std;

/* simple function */
auto just_zero() { return 0; }

/* lambda expression */
auto just_one( [] { return 1; } );
auto just_two( []() { return 2; } );

// combine
auto two_parameters( [](auto l, auto r) { return l + r; } );

auto counter( [count = 0]() mutable { return ++count; });

int main(){
    cout << just_zero() << "\n";
    cout << just_one() << "\n";
    cout << just_two() << "\n";

    cout << two_parameters(1, 2) << "\n";

    /* in-place lambda expression */
    cout << [](auto a, auto b) { return a + b; }("a", string{"i"}) << "\n";

    /* call by reference lambda expression*/
    int a = 0;
    auto incrementer( [&a] { a+=10; } );
    incrementer();
    cout << a << "\n";

    for(size_t i{0}; i<10; ++i){
        cout << counter() << " ";
    }

}