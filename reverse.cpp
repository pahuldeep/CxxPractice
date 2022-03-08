#include<iostream>
using namespace std;
int main(){
    int nInput;
    cin>>nInput;
    int result = 0;
    while(nInput>0)
    {
        result = result*10 + nInput%10;
        nInput = nInput/10;
    }
    cout<<result<<endl;
}
