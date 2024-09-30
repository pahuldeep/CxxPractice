#include <iostream>
#include <vector>
using namespace std;

void swapper(int &a, int &b) { int temp = a; a = b; b = temp; }

void bubbleSort(vector<int> &myList) {
    
    for (int item = myList.size() - 1; item > 0; item--) {

        bool swapped = false;

        for (int idx = 0; idx < item; idx++) {
            if (myList[idx] > myList[idx + 1]) {
                swapper(myList[idx], myList[idx + 1]);
                swapped = true;
            }
        }
        if (!swapped) {
            break; // Early exit if no swaps
        }
    }
}

int main() {
    int input;
    vector<int> myList;

    cout << "Enter integers (Ctrl+D to stop): ";
    while (cin >> input) {
        myList.push_back(input);
    }

    bubbleSort(myList);

    cout << "Sorted array: ";
    for (auto i : myList) { cout << i << " "; }
    cout << endl;

    return 0;
}
