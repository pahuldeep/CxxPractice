#include <iostream>
#include <vector>

using namespace std;

int minIndex(vector<int> arr, int n){
    int minimum = arr[0];
    for(int i = 1; i<n; i++){
        if(arr[i] < minimum){
            minimum = arr[i];
        }
    }
    return minimum;
}

int maxIndex(vector<int> arr, int n){
    int maxinum = arr[0];
        for(int i = 1; i<n; i++){
        if(arr[i] > maxinum){
            maxinum = arr[i];
        }
    }
    return maxinum;
}


int main(){
    vector<int>arr{7, 2, 9, 4, 6};
    
    int min_index = minIndex(arr, arr.size());
    cout << min_index << endl; 

    int max_index = maxIndex(arr, arr.size());
    cout << max_index << endl; 
}
