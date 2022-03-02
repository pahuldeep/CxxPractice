#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    vector<string> msg {"Hello", "Pahul","I am ","Your code"};
    for(const string& words : msg)
    {cout<<words<<endl;}
    cout<<endl;
}