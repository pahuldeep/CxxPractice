#include <iostream>
#include <vector>

using namespace std;

void without_capture(int  x){
    cout << "value: " << x << "\n";
}

int main(){
    vector<void (*)(int)> viewer;

    viewer.push_back(without_capture);
    viewer.push_back([](int x){ cout << "lambda: " << x << "\n"; } );

    for(auto &i: viewer){
        i(10);
    }
}