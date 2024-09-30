#include <iostream>
#include <string>
#include <random>
#include <vector>

#define edl "\n"
using namespace std;

void swapper(int &a, int &b){ int temp = a; a = b; b = temp; }
void print(vector<int> array){ for(auto &i: array){cout << i << edl;} }

/* Iterative method */
void Selection(vector<int> &array){
    int n = array.size();

    for(int index = 0; index < n - 1; index++){
        int select = index;
        for(int j = index + 1; j < n; j++){
            if(array[j] < array[select]){
                select = j;
            }
        }

        if (select != index){
            swapper(array[select], array[index]);
        }
    }
}
/* Recursive method  */
int minIndex(vector<int> &arr, int i, int j){
    if(i == j) return i;
    int k = minIndex(arr, i+1, j);
    return (arr[i] < arr[k] ? i : k); 
}

void selectionSortRecursive(vector<int> &arr, int index = 0) {

    if (index == arr.size()) return;
    
    int unsorted = minIndex(arr, index, arr.size() - 1);
    
    if(unsorted != index){
        swapper(arr[unsorted], arr[index]);
    }
    selectionSortRecursive(arr, index + 1);
}


int main(){
    
    vector<int>array {64, 25, 12, 22, 11};
    string line(50, '+');

    Selection(array);
    print(array);


    random_device device;
    mt19937 generator(device());
    shuffle(begin(array), end(array), generator);
    
    cout << line << "\n";
    print(array);


    cout << line << "\n";
    selectionSortRecursive(array);
    print(array);

    return 0;
}