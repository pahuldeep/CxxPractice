#include <iostream>
#include <vector>

#define edl "\n"
using namespace std;

void Selection(vector<int> &array){
    int n = array.size();

    for(int index = 0; index < n - 1; index++){
        int unsorted = index;
        for(int j = index + 1; j < n; j++){
            if(array[j] < array[unsorted]){
                unsorted = j;
            }
        }

        if (unsorted != index){
            swapper(array[unsorted], array[index]);
        }
    }
}

void swapper(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void print(vector<int> array){
    for(auto &i: array){
        cout << i << edl;
    }
}

int main(){
    
    vector<int>array {64, 25, 12, 22, 11};

    Selection(array);
    print(array);


    return 0;
}