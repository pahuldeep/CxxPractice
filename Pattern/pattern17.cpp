// created by pahuldeep 2.10.2024

// 55555
// 4444*
// 333**
// 22***
// 1****

#include <iostream>

int main(){
    int n;
    std::cin >> n;

    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= n; j++){
            if (j > i){
                std::cout << "*";
            }
            else{
                std::cout << i ;
            }
        }
        std::cout << "\n";
    }
}