#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//[303]区域和检索 - 数组不可变
//leetcode submit region begin(Prohibit modification and deletion)
class NumArray {
public:
    vector<int> preSum;

    NumArray(vector<int> &nums) {
        preSum.resize(nums.size() + 1, 0);
        for (int i = 1; i <= nums.size(); ++i) {
            preSum[i] = preSum[i - 1] + nums[i - 1];
        }
    }

    int sumRange(int left, int right) {
        return preSum[right + 1] - preSum[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
//leetcode submit region end(Prohibit modification and deletion)
