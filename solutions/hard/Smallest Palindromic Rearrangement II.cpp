// Title: Smallest Palindromic Rearrangement II
            // Difficulty: Hard
            // Language: C++
            // Link: https://leetcode.com/problems/smallest-palindromic-rearrangement-ii/


                long long ways = countWays(half);

                if (ways >= k) {
                    left.push_back(char('a' + c));
                    break;
                }

                k -= ways;
                half[c]++;
            }
        }

        string right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};
                half[c]--;
