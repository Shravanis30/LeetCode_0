// Title: Maximum Product of Two Elements in an Array
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-product-of-two-elements-in-an-array/

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int first = 0, second = 0;

        for (int x : nums) {
            if (x > first) {
                second = first;
                first = x;
            } else if (x > second) {
                second = x;
            }
        }

        return (first - 1) * (second - 1);
    }
};
