// Title: Maximize Active Section with Trade II
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/maximize-active-section-with-trade-ii/

            if (s[r] == '1')
                r = le[r] - 1;

            if (!canApply(l, r)) {
                ans.push_back(ones);
                continue;
            }

            int best = max(queryLeftMost(l, r), queryRightMost(l, r));

            l = ri[ri[l] + 1] + 1;
            r = le[le[r] - 1] - 1;

            if (l <= r && le[l] != le[r])
                best = max(best, seg->query(l, le[r] - 1));

            ans.push_back(ones + best);
        }

        return ans;
    }
};

