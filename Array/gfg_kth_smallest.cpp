/*TC: O(n log k)

SC: O(k)

✅ Most optimal solution without sorting*/

class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        // code here
        priority_queue<int> maxheap;
        for(int i=0;i<arr.size();i++){
            maxheap.push(arr[i]);
            if(maxheap.size>k){
                maxheap.pop();
            }
        }
        return maxheap.top();
    }
};
