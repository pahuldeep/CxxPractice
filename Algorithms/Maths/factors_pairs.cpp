#include<bits/stdc++.h>

int factor(int n){
    for(int i=0;i<n;i++){
        if(n%i==0) std::cout<< i << ":- " << n/i <<std::endl;
    }
}

int main(){
    int n;
    std::cin>>n;
    factor(n);
    return 0;
}


