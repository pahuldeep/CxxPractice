#include<bits/stdc++.h>
using namespace std;

long long gcd_first(int A, int B){
    int m = min(A, B), g;
    for(int i=m; i>=1; i--){
        if(A%i==0 && B%i==0){
            g=i;
            return g;
        }
    }
}
long long gcd_second(int A, int B){
    if(B==0){
        return A;}
    else{
        return gcd_second(B, A%B);}
}
int d, x, y;
long long gcd_third(int A, int B)
{
    if(B==0)
    { 
        d = A;
        x = 1;
        y = 0;
    }
    else{
        gcd_third(B, A%B);
        int temp = x;
        x = y;
        y = temp - (A/B)*y;}
}
int main(){
    int A, B;
    cin>>A>>B;
    cout<<" Iterative :"<<gcd_first(A,B)<<endl;
    cout<<" Recursion :"<<gcd_second(A,B)<<endl;
    gcd_third(A,B);
    cout<<" Euclid :d = "<<d<<" x = "<<x<<" y = "<<y<<endl;
    return 0;
}