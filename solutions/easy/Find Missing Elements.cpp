// Title: Find Missing Elements
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/find-missing-elements/

#include <algorithm>
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int length = nums.size();
        vector<int>arr;

        for(int i = 1; i < length; i++) {
            if(nums[i] - nums[i - 1] > 1) {
                for (int j = nums[i - 1] + 1; j < nums[i]; j++) {
                    arr.push_back(j);
                }
            }
        }
        return arr;
    }
};
