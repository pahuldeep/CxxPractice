#include <iostream>
#include <vector>

#define endl "\n"
using namespace std;

int minIndex(vector<int> &arr, int i, int j){

    if(i == j) return i;
    
    int k = minIndex(arr, i+1, j);

    if (arr[i] < arr[k]){
        return i;
    }
    else{
        return k;
    }
}

int maxIndex(vector<int> &arr, int i, int j){
    if(i == j) return i;
    int k = maxIndex(arr, i+1, j);
    return (arr[i] > arr[k] ? i: k);
}

int main(){
    vector<int> arr = {7, 2, 9, 4, 6};
    
    int min_index = minIndex(arr, 2, 4);
    cout << arr[min_index] << endl; 

    int max_index = maxIndex(arr, 2, 4);
    cout << arr[max_index] << endl; 
}
