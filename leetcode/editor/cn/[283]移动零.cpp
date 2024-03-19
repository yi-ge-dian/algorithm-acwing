#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//feat: [283]移动零
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void moveZeroes(vector<int> &nums) {
        int fast = 0;
        int slow = 0;
        while (fast < nums.size()) {
            if (nums[fast] != 0) {
                swap(nums[slow], nums[fast]);
                slow++;
            }
            fast++;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
