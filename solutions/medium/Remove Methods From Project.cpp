// Title: Remove Methods From Project
            // Difficulty: Medium
            // Language: C++
            // Link: https://leetcode.com/problems/remove-methods-from-project/

                    dfs(v);
            }
        };

        dfs(k);

        // Check whether removal is possible
        for (auto &e : invocations) {
            int u = e[0], v = e[1];
            if (!vis[u] && vis[v]) {
                vector<int> ans;
                for (int i = 0; i < n; i++)
                    ans.push_back(i);
                return ans;
            }
        }

        // Return remaining methods
        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!vis[i])
                ans.push_back(i);
        }

        return ans;
    }
};
