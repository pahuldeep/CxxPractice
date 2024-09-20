#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int count0 = 0, count1 = 0, count2 = 0;

    for (int num : nums)
    {
        if (num == 0)
        {
            count0++;
        }
        else if (num == 1)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }

    int index = 0;
    for (int i = 0; i < count0; i++)
    {
        nums[index++] = 0;
    }
    for (int i = 0; i < count1; i++)
    {
        nums[index++] = 1;
    }
    for (int i = 0; i < count2; i++)
    {
        nums[index++] = 2;
    }
}

int main(){
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    sortColors(nums);

    for (int num : nums) {
        std::cout << num << " ";
    }

}