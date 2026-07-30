// Title: Minimum Number of Pushes to Type Word I
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/minimum-number-of-pushes-to-type-word-i/

class Solution {
public:
    int minimumPushes(string word) {
        int ans = 0;

        for (int i = 0; i < word.size(); i++) {
            ans += (i / 8) + 1;
        }

        return ans;
    }
};
