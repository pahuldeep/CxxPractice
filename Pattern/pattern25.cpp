// A*C*E
// *B*D*
// A*C*E
// *B*D*
// A*C*E

#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= n; j++){
            if((i + j) % 2 == 1){
                int temp = j;
                cout << static_cast<char>(temp + 'A');
            }
            else{
                cout << "*";
            }
        }
        cout << "\n";
    }
}