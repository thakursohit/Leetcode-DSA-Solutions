/*
Max heap stores at most k elements → O(k)

✅ Summary
Parameter	Complexity
Time (TC)	O(n² log k)
Space (SC)	O(k)

*/
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> maxheap;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                maxheap.push(matrix[i][j]);
                if(maxheap.size()>k){
                    maxheap.pop();
                }

            }
        }
        return maxheap.top();
        
    }
};
