// 3. Longest Substring Without Repeating Characters
#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
    if (s.empty()) {
        return 0;
    }
    vector<bool> bitSet(256, false);

    int result = 0;
    int left = 0, right = 0;

    while (left < s.size()) {
        if (right < s.size() && bitSet[s[right]] == 0) {
            // Mark the corresponding character as 1
            bitSet[s[right]] = 1;
            right++;
        } else {
            // Mark the corresponding character as 0
            bitSet[s[left]] = 0;
            left++;
        }
        result = max(result, right - left);
    }
    return result;
}

// int lengthOfLongestSubstring(std::string s) {
//     int maxLen = 0;
//     int start = 0;
//     int n = s.length();
    
//     // Initialize mask with all bits set to 0
//     unsigned int mask = 0;
    
//     for (int i = 0; i < n; ++i) {
//         // Move start index to remove the previous occurrence of the current character
//         while ((mask & (1 << (s[i] - 'a')))!= 0) {
//             mask &= ~(1 << (s[start++] - 'a'));
//         }
        
//         // Update mask to include the current character
//         mask |= (1 << (s[i] - 'a'));
        
//         // Update maximum length
//         maxLen = std::max(maxLen, i - start + 1);
//     }
    
//     return maxLen;
// }

int main() {
    string s = "abcabcbb";
    int result = lengthOfLongestSubstring(s);  
    cout << result << endl; // Output should be 3
    return 0;
}

