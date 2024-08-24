#include<iostream>
#include<vector>

using namespace std;

void insertionSort(vector<int> &elements){
    for(int idx = 1; idx < elements.size(); idx++){
        int j = idx - 1;
        int item = elements[idx];
        while (j >= 0 && elements[j] > item){
            elements[j + 1] = elements[j];
            j--;
        }
        elements[j + 1] = item;
    }
}

int main() {
    vector<int> array = {12, 41, 15, 51, 56};
    insertionSort(array);

    cout << "Sorted array: ";
    for (int num : array) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}