#include <iostream>
using namespace std;

int main()
{
    int *intPointer = new int;
    *intPointer = 242;

    cout << "value " << *intPointer << "\n";
    cout << "Address " << intPointer << "\n";

    delete intPointer;
    return 0;
}