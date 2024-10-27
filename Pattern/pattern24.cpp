// *1*
// 2*3
// *4*

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int x=1; 
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i + j) % 2 == 1){
                cout << x++;
            }
            else{
                cout << "*";
            }
        }
        cout << "\n";
    }
}