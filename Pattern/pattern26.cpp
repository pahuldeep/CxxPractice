// *A*B*
// C*D*E
// *F*G*
// H*I*J
// *K*L*

#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    char x = 'A';

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if((i + j)%2 == 1){
                cout << x++;
            }
            else{
                cout << "*";
            }
        }
        cout << "\n";
    }
}