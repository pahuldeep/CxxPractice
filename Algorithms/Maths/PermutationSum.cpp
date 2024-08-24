#include<bits/stdc++.h>
using namespace std;

int ans[100][100];
int k=0;

int fact(int f)
{
    int a=1;
    for (int i=1;i<=f;i++)
    a*=i;
    return a;
}
void permute(int*arr,int idx,int n)
{
    if(n==idx)
    {
        for(int i=0;i<n;i++)
        ans[k][i]=arr[i];
        k++;
        return;
    
    }
    for(int i=idx;i<n;i++)
    {
        swap(arr[i],arr[idx]);
        permute(arr,idx+1,n);
        swap(arr[idx],arr[i]);
    }
    return;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    permute(arr,0,n);
    int f=fact(n);
    for(int i=0;i<f;i++)
    {
        for(int j=0;j<n;j++)
    cout<<ans[i][j]<<" ";
    cout<<endl;
    }
}