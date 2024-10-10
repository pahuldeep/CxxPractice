// created by pahuldeep 2.10.2024

// 1****
// 12***
// 123**
// 1234*
// 12345

#include <iostream>

int main(){
    int n;
    std::cin >> n;
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if (j > i){
                std::cout << "*";
            }
            else{
                std::cout << j;
            }
        }
        std::cout << "\n";
    }
}