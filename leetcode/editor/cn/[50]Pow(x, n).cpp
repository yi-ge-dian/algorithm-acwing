#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//feat: [50]Pow(x, n)
//leetcode submit region begin(Prohibit modification and deletion)
class Solution {
public:
    double myPow(double x, int n) {
        double ans = 1;
        if (x == 0) {
            return 0;
        }
        if (n < 0) {
            x = 1 / x;
        }

        while (n) {
            if (n & 1) {
                ans = ans * x;
            }
            n /= 2;
            x = x * x;
        }
        return ans;
    }
};
//leetcode submit region end(Prohibit modification and deletion)
