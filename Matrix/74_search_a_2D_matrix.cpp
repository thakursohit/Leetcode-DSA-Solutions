class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;i<m;j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;
        
    }
};

//tc = n*m

//most optimal

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int row = 0, col = m - 1;  // start from top-right corner

        while(row < n && col >= 0){
            if(matrix[row][col] == target) return true;
            else if(matrix[row][col] > target) col--; // move left
            else row++; // move down
        }

        return false;
    }
};

/*Why it’s faster:

You start at the top-right corner.

If the current number is too big → move left.

If it’s too small → move down.

You eliminate one row or column each step, so max steps = n + m.

⏱ Time complexity: O(n + m)
📦 Space complexity: O(1)*/
