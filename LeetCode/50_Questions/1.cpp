/* 
Basic Majority Element:
Given an array of size n, find the majority element that appears more than 𝑛/2 times. If no such element exists, return INT_MIN   

input: 3,2,2,1,2,2,1
output: 2              

Boyer-Moore Voting Algorithm
*/

#include <iostream>
#include <vector>

using namespace std;

int findMaj(vector<int> &arr){
    if(arr.empty()) return INT_MIN;

    int count = 1; 
    int major = arr[0];
    for(int i = 1; i < arr.size(); i++){
        if(count == 0){
            major = arr[i];
            count = 1;
        }

        if (arr[i] == major){
            count++;
        }else{
            count--;
        }
    }
    return major;
}

bool checkMaj(vector<int> &arr, int maj){
    if(arr.empty()) return false;

    int count = 0;
    int n = arr.size();
    for(int i = 0; i < n; ++i){
        if(arr[i] == maj){
            ++count;
        }
        if(count > n/2) return true;
    }
    return false;
}

int main() {

    vector<int> arr = {1, 2, 3, 2, 2, 2, 5, 2, 2};
    int maj = findMaj(arr);
    if (maj == INT_MIN || !checkMaj(arr, maj)) {
        cout << "No majority element found." << endl;
    } else {
        cout << "Majority element is " << maj << endl;
    }
    return 0;
}
