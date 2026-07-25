// Title: Number of Unique XOR Triplets II
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-unique-xor-triplets-ii/

        if (n == 1)
            return 1;

        unordered_set<int> pairs;
        unordered_set<int> ans;

        // Store all distinct XORs of two different elements
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                pairs.insert(nums[i] ^ nums[j]);
            }
        }

        // Form triplet XORs
        for (int x : pairs) {
            for (int num : nums) {
                ans.insert(x ^ num);
            }
        }

        return ans.size();
    }
};
