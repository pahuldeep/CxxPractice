#include<iostream>
#include<vector>

using namespace std;

void insertionSort(vector<int> array){
    for(int i = 1; i < array.size(); ++i){

        int unsorted = array[i];
        int j = i - 1;
        
        while(j >= 0 && array[j] > unsorted){
            array[j + 1] = array[j];
            j -= 1;
        }
        
        array[j + 1] = unsorted;
    }
}

void insertionSortRecursive(vector<int>& arr, int n) {
    if (n <= 1) {
        return;
    }

    insertionSortRecursive(arr, n - 1);

    int j = n - 2;

    while (j >= 0 && arr[j] > arr[n - 1]) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = arr[n - 1];
}

int main() {
    vector<int> test1 = {12, 41, 15, 51, 56};
    insertionSort(test1);

    cout << "Sorted array: ";
    for (int num : test1) {
        cout << num << " ";
    }
    cout << endl;

    vector<int> test2 {13, 24, 15, 11, 56};
    insertionSortRecursive(test2, test2.size());
    
    cout << "Sorted array: ";
    for (int num : test2) {
        cout << num << " ";
    }
    cout << endl;


    return 0;
}