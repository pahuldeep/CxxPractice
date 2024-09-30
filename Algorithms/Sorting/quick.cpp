#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>&arr, int low, int high){

}

void quickSort(vector<int>&arr, int low, int high){
    
    if(low < high){ 
        int part = partition(arr, low, high);

        quickSort(arr, low, part - 1);
        quickSort(arr, part + 1, high);
    }

}