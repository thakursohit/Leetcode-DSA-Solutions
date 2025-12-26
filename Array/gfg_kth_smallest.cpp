/*TC: O(n log k)

SC: O(k)

✅ Most optimal solution without sorting*/

class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        priority_queue<int> maxHeap;
        for(int num:arr){
            if(maxHeap.size()<k){
                maxHeap.push(num);
            }
            else if(maxHeap.top()>num){
                    maxHeap.pop();
                    maxHeap.push(num);
                }
            }
        return maxHeap.top();
       
        
    }
};
