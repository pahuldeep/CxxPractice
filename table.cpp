#include<iostream>
using namespace std;
int main()
{
    int n,m,l;
    cout<<"Enter the table no:";
    cin>>n;
    cout<<"Enter the table count:";
    cin>>l;
    for (int i = 1; i<=l; i++)
    {
        m = n*i;
        cout<<m<<endl;
    }
}