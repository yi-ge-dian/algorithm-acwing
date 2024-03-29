#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//feat: [344]反转字符串
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    void reverseString(vector<char> &s) {
        int left = 0;
        int right = s.size() - 1;
        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};
//leetcode submit region end(Prohibit modification and deletion)
