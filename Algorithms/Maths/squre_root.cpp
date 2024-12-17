#include <iostream>
using namespace std;

// squre root method;
void babylonion(float x, float y = 1, float e = 0.0001){
    float z = x;
    while (abs(z - y) > e)
    {
        z = (z + y) / 2;
        y = x / z;
    }

    cout << "number: " << x << " value is: " << z << "\n";
}

int main()
{
    float n;
    cin >> n;

    babylonion(n);
}