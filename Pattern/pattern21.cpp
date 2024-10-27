// EEEEE
// DDDD*
// CCC**
// BB***
// A****

#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;

    for(int i = n; i >= 0; i--){
        for(int j = 0; j < n; j++){
            if (i > j){
                cout << static_cast<char>(i-1 + 'A');
            }
            else{
                cout << "*";
            }
        }
        cout << "\n";
    }
}