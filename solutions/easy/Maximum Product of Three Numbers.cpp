// Title: Maximum Product of Three Numbers
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/maximum-product-of-three-numbers/

            if (x >= max1) {
                max3 = max2;
                max2 = max1;
                max1 = x;
            } else if (x >= max2) {
                max3 = max2;
                max2 = x;
            } else if (x > max3) {
                max3 = x;
            }

            // Two smallest
            if (x <= min1) {
                min2 = min1;
                min1 = x;
            } else if (x < min2) {
                min2 = x;
            }
        }

        return max(max1 * max2 * max3, min1 * min2 * max1);
    }
};
