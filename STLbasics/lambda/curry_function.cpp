#include <iostream>
#include <string>

using namespace std;

/* simple sum */
int sum(int a, int b, int c)
{
    return a + b + c;
}

/* curry sum */
auto curry_sum( 
    [](auto a) { 
        return [a](int b){ 
            return [a, b](int c) { 
                return a + b + c; 
            }; 
        }; 
    }                 
);

int main()
{
    cout << sum(1, 2, 3) << "\n";

    auto first = curry_sum(10);
    auto second = first(20);
    auto third = second(30);

    cout << third;
}