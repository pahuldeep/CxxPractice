 
/* https://leetcode.com/problems/partition-equal-subset-sum

Given an integer array nums, return true
if you can partition the array into two subsets such that the sum of the elements in both subsets is equal or false otherwise.

Example 1:

Input: nums = [1,5,11,5]
Output: true
Explanation: The array can be partitioned as [1, 5, 5] and [11]. 

*/

#include <iostream>
#include <numeric>
#include <vector>

using namespace std;

bool canPartition(vector<int> &nums)
{
    int total_sum = accumulate(nums.begin(), nums.end(), 0);
    if (total_sum % 2 != 0)
    {
        return false;
    }
    int target_sum = total_sum / 2;
    
    vector<bool> dp(target_sum + 1, false);
    dp[0] = true;

    for (int num : nums)
    {
        for (int j = target_sum; j >= num; --j)
        {
            dp[j] = dp[j] || dp[j - num];
        }
    }

    return dp[target_sum];
}

int main()
{
    vector<int> nums_test1 = {1, 5, 11, 5};
    vector<int> nums_test2 = {1, 2, 3, 5};

    cout << canPartition(nums_test1);
}