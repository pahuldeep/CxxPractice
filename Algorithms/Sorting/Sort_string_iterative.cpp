#include <iostream>
#include <string>

using namespace std;

void sortString(string number){

    for(int i = 0; i <= 9; i++){
        for(int j = 0; j < number.length(); j++){

            if(number[j] - '0' == i){
                cout << number[j];
            }
        }
    }
}



int main(){
    string s;
    cin >> s;

    sortString(s);
}