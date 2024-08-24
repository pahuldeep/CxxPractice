
#include"bits/stdc++.h"
using namespace std;

# define ll long long int

ll fact(ll k,ll n)

{
    ll a=1;
    for(ll i=k; i > n; i--)
        a*=i;
    return a;
}

int main()

{

   int t;

   cin>>t;

   while(t--)

   {

       ll n,k;

       cin>>n>>k;

       ll ans=fact(k,(k-n));

       ll a=1e9+7;

       cout<<ans%a<<endl;

   }

   return 0;

}
