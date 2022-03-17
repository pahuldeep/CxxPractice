#include<iostream>
using namespace std;
int main(){

    char ch;
    cin>>ch;
    
    // C style casting
    cout<<(int)ch<<endl;

    // typing operator C++ style casting
    cout<< static_cast<int>(ch)<<endl;
}