#include<iostream>

using namespace std;

double swapped(int &a, int &b){

    int temp = a;
    a = b;
    b = temp;
} 

int main(){
    int a, b;
    cin >> a >> b;
    swapped(a, b);    

    cout << a<< " " << b << "\n";
    
}