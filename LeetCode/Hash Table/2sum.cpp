#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define MOD 1000000007

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indexs;
        for (int i = 0; i < nums.size(); ++i) {
            int diff = target - nums[i];
            if (indexs.find(diff) != indexs.end()) {
                return {indexs[diff], i};
            }
            indexs[nums[i]] = i;
        }
        return {};
    }
};


// Function to get user inputs
struct InputData {
    vector<int> nums;
    int target;
};

InputData getInput() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    int target;
    cin >> target;
    return {nums, target}; 
}

// Function to display the solution
void displayOutput(const vector<int>& result) {
    if (result.empty()) {
        cout << "No solution found." << endl;
    } else {
        cout << "The output is: ";
        for (int i : result) {
            cout << i << " ";
        }
        cout << endl;
    }
}

int main() {

    // Fast input and output
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    
    int test_cases = 1;
    // cin >> test_cases;

    for (int t = 1; t <= test_cases; ++t) {
        InputData input_data = getInput();
        Solution s;
        vector<int> result = s.twoSum(input_data.nums, input_data.target);
        displayOutput(result);
    }

    return 0;
}
