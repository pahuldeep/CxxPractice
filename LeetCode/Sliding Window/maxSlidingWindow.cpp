#include <iostream>
#include <vector>
#include <deque>

using namespace std;


vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> result;

    deque<int> window; // Store indices of elements in the sliding window

    for (int i = 0; i < n; ++i) {
        // Remove elements that are out of the current window
        while (!window.empty() && window.front() < i - k + 1) {
            window.pop_front();
        }

        // Remove elements smaller than the current element from the back
        while (!window.empty() && nums[window.back()] < nums[i]) {
            window.pop_back();
        }

        // Add the current element's index to the window
        window.push_back(i);

        // The front of the window contains the maximum element for the current window
        if (i >= k - 1) {
            result.push_back(nums[window.front()]);
        }
    }

    return result;
}

int main(){
    vector<int> nums = {1, 3, -1, -3, 5, 3, 6, 7}; 
    int k = 3;

    vector<int> result = maxSlidingWindow(nums, k);

    for (int val : result) {
        cout << val << " ";
    }
}

