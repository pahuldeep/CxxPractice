#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int sum = 0, last;
    int Orginal = n;
    while(n>0){
        last = n%10;
        sum += round(pow(last,3));
        n = n/10;
    }
    if(sum == Orginal){
        cout<<"Armstrong";
    }
    else{
        cout<<"Not Armstrong";
    }
}
