#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<list>
#include<stack>

using namespace std;

//feat: [8]字符串转换整数 (atoi)
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    int myAtoi(string s) {
        long long ans = 0;
        int start = 0;

        // 去除前导 0
        while (start<s.length() && s[start] == ' ') start++;

        if (start == s.length()) return 0;

        // 获得符号位
        int sign = 1; // 默认为正
        if (s[start] == '-'){
            sign = -1;
            start++;
        } else if (s[start] == '+'){
            start++;
        }

        // 获得数字
        for (int i = start; i < s.length() && isdigit(s[i]); ++i) {
            ans = 10 * ans + (s[i] - '0') * sign;
            if (ans >0 && ans >= INT_MAX) ans = INT_MAX;
            if (ans < 0 && ans <= INT_MIN)   ans = INT_MIN;
        }

        return  ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
