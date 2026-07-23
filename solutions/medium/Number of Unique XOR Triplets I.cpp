// Title: Number of Unique XOR Triplets I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/number-of-unique-xor-triplets-i/

        int n = nums.size();

        // Number of bits needed to represent values in [1..n]
        int bits = 0;
        while ((1 << bits) <= n) bits++;
        int all = 1 << bits;

        // Editorial optimization
        if (n >= 130) return all;

        unordered_set<int> st;

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                for (int k = j; k < n; k++) {
                    st.insert(nums[i] ^ nums[j] ^ nums[k]);
                }
            }
        }

        return st.size();
    }
};
