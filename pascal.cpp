#include<bits/stdc++.h>
using namespace std;

fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}

int main(){
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
    for(int j=0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j));
        }
    cout<<endl;
    }
}