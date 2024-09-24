#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;  /* new memory address location */
    *ptr = 242;

    cout << "value " << *ptr << "\n";
    cout << "Address " << ptr << "\n";

    delete ptr;
    return 0;
}