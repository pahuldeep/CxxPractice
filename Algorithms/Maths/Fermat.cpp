#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll power(ll a, ll b, ll m){
    int res = 1;
    while (b>0)
    {
        if(b&1 == 0){res = (res*a)% m;}
        a = a*a % m;
        b>>=1;
    }
    return res;
}
ll inverse(ll a, ll b){
    power(a,b-2,b);
}

int main(){
    int a,b;
    cin >> a >> b;
    cout << power(a,b,1000000007) << endl;
    cout << inverse(a,b) << endl;
}