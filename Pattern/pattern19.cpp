// A*****
// BB****
// CCC***
// DDDD**
// EEEEE*

#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if (j < i){
                cout << static_cast<char>(i + 'A'-1);
            }else{
                cout << "*";
            }
            
        }

        cout << "\n";
    }
}