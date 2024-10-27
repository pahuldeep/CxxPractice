#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;

    int result = a << b;
    cout << a << " <<(X) "<< "no of time 2: " << b <<" = "<<  result << endl;

    int result2 = a >> b;
    cout << a << " >>(/) " << "no of time 2: "<< b <<" = "<<  (double)result2 << endl;
}
