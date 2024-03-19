#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//feat: [167]两数之和 II - 输入有序数组
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right) {
            if (numbers[left] + numbers[right] < target) {
                left++;
            } else if (numbers[left] + numbers[right] > target) {
                right--;
            } else {
                return {left+1, right+1};
            }
        }
        return {-1, -1};
    }
};
//leetcode submit region end(Prohibit modification and deletion)
