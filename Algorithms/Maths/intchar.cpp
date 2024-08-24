#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<n; i++)

string char_to(string a){
    int n = a.size();
    rep(i,n){
        if(a[i]>='0' && a[i]<='9'){
            a[i] = a[i]-'0';
    }
    }
    return a;
}
int main()
{
    string a,b;
    string res;
    cin >> a >> b ;
    cout << " Value of strings : " << a + b << endl;
    cout << " Value of int : "<< char_to(a) + char_to(b) << endl;
    
}