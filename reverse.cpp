#include<iostream>
using namespace std;
int main(){
    int start,end,temp, n;
    cin>>n;
    for(int i = 0; i <= sizeof(n-1); i++){
        start = end;
        end = temp;
        temp = start;
        start+=1;
        end-=1;  
        cout<<start[i];      
    }
    cout<<endl;
}
