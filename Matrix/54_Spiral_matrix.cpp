class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();

        int top = 0, down = m - 1;
        int left = 0, right = n - 1;

        while (top <= down && left <= right) {

            for (int j = left; j <= right; j++)
                ans.push_back(matrix[top][j]);
            top++;

            for (int i = top; i <= down; i++)
                ans.push_back(matrix[i][right]);
            right--;

            if (top <= down) {
                for (int j = right; j >= left; j--)
                    ans.push_back(matrix[down][j]);
                down--;
            }

            if (left <= right) {
                for (int i = down; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        return ans;
    }
};
