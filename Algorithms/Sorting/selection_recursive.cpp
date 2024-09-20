#include <iostream>
#include <vector>

#define edl "\n"
using namespace std;

int minIndex(vector<int> &arr, int i, int j){
    if(i == j) return i;
    int k = minIndex(arr, i+1, j);
    return (arr[i] < arr[k] ? i : k); 
}

void swapper(int &a, int &b){ int temp = a; a = b; b = temp; }
void print(vector<int> array){ for(auto &i: array){cout << i << edl;} }

void selectionSortRecursive(vector<int> &arr, int index = 0) {

    if (index == arr.size()) return;
    
    int unsorted = minIndex(arr, index, arr.size() - 1);
    
    if(unsorted != index){
        swapper(arr[unsorted], arr[index]);
    }

    selectionSortRecursive(arr, index + 1);
}



int main() {
    vector<int> arr = {64, 25, 12, 22, 11};

    selectionSortRecursive(arr);
    print(arr);

    return 0;
}