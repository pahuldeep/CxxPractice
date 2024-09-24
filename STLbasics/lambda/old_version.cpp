#include <iostream>
#include <string>

using namespace std;
/* old way */
struct myname
{
    string name;
    void operator()() { cout << "hello, " << name << "\n"; };
};

/* lambda expression */
auto tell_me(
    []{ cout << "hello, mechi"; }
);

int main()
{
    myname mechi{"Defense Cyborg"};
    mechi();

    tell_me();
}
