#include<iostream>
#include<vector>
#include<queue>
#include<string>

using namespace std;

//feat: [5]最长回文子串
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
// 从中间向两边扩散
//    string palindrome(string s, int left, int right) {
//        while (left >= 0 && right <= s.size() - 1 && s[left] == s[right]) {
//            left--;
//            right++;
//        }
//        return s.substr(left + 1, right - left - 1);
//    }
//
//    string longestPalindrome(string s) {
//        string res;
//        for (int i = 0; i < s.size(); ++i) {
//            string s1 = palindrome(s, i, i);
//            string s2 = palindrome(s, i, i + 1);
//            res = res.size() > s1.size() ? res : s1;
//            res = res.size() > s2.size() ? res : s2;
//        }
//
//        return res;
//    }
// dp
    string longestPalindrome(string s) {
        int size = s.size();
        vector<vector<bool>> dp(size, vector<bool>(size));
        // 初始化
        for (int i = 0; i < size; ++i) {
            dp[i][i] = true;
        }

        // 状态转移
        int max = 1;
        int start = 0;
        for (int j = 0; j < size; j++) {
            for (int i = 0; i < j; i++) {
                if (s[i] != s[j]) {
                    dp[i][j] = false;
                } else {
                    if (j - i < 3) {
                        dp[i][j] = true;
                    } else {
                        dp[i][j] = dp[i + 1][j - 1];
                    }
                }
                if (dp[i][j] == true && j - i + 1 > max) {
                    max = j - i + 1;
                    start = i;
                }
            }
        }

        return s.substr(start, max);
    }
};
//leetcode submit region end(Prohibit modification and deletion)
