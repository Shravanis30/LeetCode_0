// Title: Stone Game IX
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/stone-game-ix/

    bool stoneGameIX(vector<int>& stones) {
        int cnt[3] = {};

        for (int x : stones) {
            cnt[x % 3]++;
        }

        if (cnt[0] % 2 == 0) {
            return cnt[1] > 0 && cnt[2] > 0;
        }

        return abs(cnt[1] - cnt[2]) > 2;
    }
};
