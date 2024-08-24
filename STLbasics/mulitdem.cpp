#include<iostream>
#include<string>

using namespace std;

class myclass {
public:
    int value;
    myclass(int val){ value = val;}
};

int main(){
    myclass arr[2][2] = {{myclass(1), myclass(2)}, {myclass(3), myclass(4)}};
    int val = arr[0][1].value;

    cout << val;
}