#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

//feat: [128]最长连续序列
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int longestConsecutive(vector<int> &nums) {
        unordered_map<int, int> map;
        for (int it: nums) {
            map[it] = 1;
        }

        int ans = 0;
        for (auto it: map) {
            // 如果没有被遍历过
            if (it.second) {
                int length = 1;
                int val = it.first;

                // 向左
                for (int i = 1; map.find(val - i) != map.end() && map[val - i]; ++i) {
                    length++;
                    map[val - i] = 0;
                }

                // 向右
                for (int i = 1; map.find(val + i) != map.end() && map[val + i]; ++i) {
                    length++;
                    map[val + i] = 0;
                }
                ans = max(ans, length);
            }
        }

        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
