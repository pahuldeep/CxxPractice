// created by pahuldeep 02.10.2024

// 1****
// 22***
// 333**
// 4444*
// 55555

#include <iostream>
using namespace std;

int main(){
    int n; 
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j > i){
                cout << "*";
            }
            else{
                cout << i ;
            }
        }
        cout << "\n";
    }
}