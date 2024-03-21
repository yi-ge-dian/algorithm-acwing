#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//feat: [42]接雨水
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int trap(vector<int> &height) {
        int size = height.size();
        vector<int> prefix(size, 0);
        vector<int> suffix(size, 0);
        prefix[0] = height[0];
        for (int i = 1; i < size - 1; i++) {
            prefix[i] = max(prefix[i - 1], height[i]);
            cout << prefix[i];
        }

        suffix[size - 1] = height[size - 1];
        for (int i = size - 2; i > 0; i--) {
            suffix[i] = max(suffix[i + 1], height[i]);
            cout << suffix[i];
        }


        int ans = 0;
        for (int i = 1; i < size - 1; i++) {
            ans += min(prefix[i], suffix[i]) - height[i];
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
