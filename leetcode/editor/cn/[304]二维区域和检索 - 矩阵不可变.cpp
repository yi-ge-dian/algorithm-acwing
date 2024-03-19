#include<iostream>
#include<vector>
#include<queue>

using namespace std;

//feat:[304]二维区域和检索 - 矩阵不可变
//leetcode submit region begin(Prohibit modification and deletion)
class NumMatrix {
    vector<vector<int>> pre;
public:
    NumMatrix(vector<vector<int>> &matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        pre.resize(row + 1, vector<int>(col + 1, 0));
        for (int i = 1; i <= row; ++i) {
            for (int j = 1; j <= col; ++j) {
                pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + matrix[i-1][j-1];
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        return pre[row2+1][col2+1] - pre[row1][col2+1] - pre[row2+1][col1] +pre[row1][col1];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
//leetcode submit region end(Prohibit modification and deletion)
