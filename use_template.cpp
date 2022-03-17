#include<iostream>
using namespace std;

template<class T>
T sum(T a, T b)
{
    return a + b;
}

int main(){
    int i = 5, j = 6, k;
    k =sum<int>(i, j);
    cout << k << endl;
}