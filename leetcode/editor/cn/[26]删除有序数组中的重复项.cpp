#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//feat: 26:删除有序数组中的重复项
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int removeDuplicates(vector<int> &nums) {
        if (nums.size() == 0) return 0;
        int fast = 0;
        int slow = 0;
        while (fast < nums.size()) {
            if (nums[slow] != nums[fast]) {
                slow++; //nums[0:slow] 不重复
                swap(nums[slow], nums[fast]);
            }
            fast++;
        }
        return slow + 1;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
