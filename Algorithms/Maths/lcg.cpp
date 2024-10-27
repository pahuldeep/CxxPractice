/* Linear congruential generator (LCG) 
    Xn+1 = (aXn + b) mod c
*/

#include <iostream>
using namespace std;

int lcg(){
    static int X = 0;

    const long a = 17;
    const long b = 3;
    const long c = 16;

    X = (a * X + b) % c;
    return X;
}

int main(){
    for(int k = 0; k < 20; k++){
        cout << lcg() << " ";
    }
    cout << endl;

    cout << "value mod 2: ";
    for(int k = 0; k < 20; k++){
        cout << lcg() % 2 << " ";
    }
    cout << endl;

    cout << "value mod 4: ";
    for(int k = 0; k < 20; k++){
        cout << lcg() % 4 << " ";
    }
    cout << endl;

    cout << "value mod 2: ";
    for(int k = 0; k < 20; k++){
        double x = lcg() / 16.;
        cout << int(2 * x) << " ";
    }
    cout << endl;
    
    return 0;
}