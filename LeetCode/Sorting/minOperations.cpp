/* 
https://leetcode.com/problems/minimum-operations-to-make-a-uni-value-grid

You are given a 2D integer grid of size m x n and an integer x. 

In one operation, you can add x to or subtract x from any element in the grid.
A uni-value grid is a grid where all the elements of it are equal.
Return the minimum number of operations to make the grid uni-value. 
If it is not possible, return -1. 

Input: grid = [[2, 4], [6, 8]], x = 2
Output: 4
Explanation: We can make every element equal to 4 by doing the following: 
    - Add x to 2 once.
    - Subtract x from 6 once.
    - Subtract x from 8 twice.
A total of 4 operations were used.

*/
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int minOperations(std::vector<std::vector<int>>& grid, int x) {
    std::vector<int> nums;
    for (const auto& row : grid) {
        for (int num : row) {
            nums.push_back(num);
        }
    }
    // Sort the flattened grid
    std::sort(nums.begin(), nums.end());

    int median = nums[nums.size() / 2];
    int operations = 0;

    for (int num : nums) {
        int diff = std::abs(num - median);
        if (diff % x != 0) {
            return -1;
        }
        operations += diff / x;
        cout << operations;
    }
    return operations;
}

int main(){
    vector<vector<int>> grid = {{2, 4}, {6, 8}};
    int x1 = 2;
    cout << minOperations(grid, x1);
}
    
