#include<iostream>
#include<vector>
#include<queue>
#include<stack>

using namespace std;

//feat: [11]盛最多水的容器
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int maxArea(vector<int> &height) {
        int ans = 0;
        int l = 0, r = height.size() - 1;
        while (l < r) {
            int area = min(height[l], height[r]) * (r - l);
            ans = max(ans, area);
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
