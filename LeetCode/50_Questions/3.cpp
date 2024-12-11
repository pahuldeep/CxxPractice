#include <iostream>
#include <vector>
using namespace std;

int maxSubSequence(vector<int> arr){
    int maxso = arr[0], current  = arr[0];
    for(int i = 1; i < arr.size(); i++){
        current = max(current + arr[i], arr[i]);
        // cout << current << " ";
        maxso = max(current, maxso);
    }
    return maxso;
}

int main(){
    vector<int> arr{ 1, -3, 2, 5, -8 };
    cout << "Max sequenced sum array: " << maxSubSequence(arr); 
    
}