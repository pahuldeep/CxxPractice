#include <iostream>
#include <string>

using namespace std;

void helper(string &num, int idx){

    if(idx > 9) return;  /* recursive call */
    
    for(int i = 0; i < num.length(); i++){
        if (num[i] - '0' == idx){
            cout << num[i];       
        }
    }

    helper(num, idx + 1);   /* here it do iteration */
}

void sortString(string &num){
    helper(num, 0);
}

int main(){
    string num;
    cin >> num;

    sortString(num);
}