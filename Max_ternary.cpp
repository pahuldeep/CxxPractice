#include<iostream>
using namespace std;
int main(){
    int a = 10, b = 20, c = 30, result;
    result = a > b ? (a > c ? a : c) : (b > c ? b : c);
    cout<<"maximnum of a:b:c: "<<result<<endl;
}