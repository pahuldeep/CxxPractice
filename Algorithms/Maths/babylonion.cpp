#include<bits/stdc++.h>
using namespace std;
int main(){
    float x,y,n,e;
    cin>>n;
    x=n;
    y=1;
    e=0.00001;
    while(abs(x-y)>e){
        x=(x+y)/2;
        y=n/x;
    }
    cout<<n<<" Value: "<<x<<endl; 
}