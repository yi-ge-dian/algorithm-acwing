#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//feat: [49]字母异位词分组
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs) {
        unordered_map<string, vector<string>> map;
        for (int i = 0; i < strs.size(); ++i) {
            auto key = strs[i];
            sort(key.begin(), key.end());
            map[key].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto e: map) {
            ans.push_back(e.second);
        }

        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
