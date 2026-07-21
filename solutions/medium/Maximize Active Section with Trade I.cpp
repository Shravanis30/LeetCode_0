// Title: Maximize Active Section with Trade I
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/maximize-active-section-with-trade-i/

        for (char c : t) {
            if (runs.empty() || runs.back().first != c)
                runs.push_back({c, 1});
            else
                runs.back().second++;
        }

        int bestGain = 0;

        // Look for: 0-run, 1-run, 0-run
        for (int i = 0; i + 2 < runs.size(); i++) {
            if (runs[i].first == '0' &&
                runs[i + 1].first == '1' &&
                runs[i + 2].first == '0') {

                bestGain = max(bestGain,
                               runs[i].second + runs[i + 2].second);
            }
        }

        return ones + bestGain;
    }
};
