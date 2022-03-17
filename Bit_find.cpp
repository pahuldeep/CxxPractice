#include<iostream>
using namespace std;
int main()
{
    int n,mask,loc=3;
    cin>>n;
    for(int i=0;i<=loc;i++){
        mask = 1 << i;
        if((n&mask)==0)
            cout<<"Bit "<<i<<" is 0"<<endl;
    }
    cout<<endl;
}