#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//移除元素
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeElement(vector<int> &nums, int val) {
        int fast = 0;
        int slow = 0;
        while (fast < nums.size()) {
            if (nums[fast] != val) {
                swap(nums[slow], nums[fast]);
                slow++;
            }
            fast++;
        }

        return slow;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
