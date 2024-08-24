#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    for(int i=0; i<=9; i++){
        for(int j=0; j < s.length(); j++){
            if(s[j]-48 == i){
                cout<<s[j];
            }
        }
    }
}