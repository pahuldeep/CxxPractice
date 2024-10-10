// A*****
// AB****
// ABC***
// ABCD**
// ABCDE*

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if (j < i){
                cout << static_cast<char>(j + 'A');
            }
            else{
                cout << "*";
            }
        }
        cout << "\n";
    }
}