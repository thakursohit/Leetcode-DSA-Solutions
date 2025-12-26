class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        vector<int> ans;
        priority_queue<int ,vector<int> , greater<int>> minheap;
        for(int i=0;i<arr.size();i++){
            minheap.push(arr[i]);
            if(minheap.top()<arr[i]){
                minheap.pop();
            }
        }
        for(int i=0;i<minheap.size();i++){
            ans.push_back(minheap.top());
            minheap.pop();
            
        }
        return ans;
        
    }
};

/*Complexity

Time Complexity: O(n log k)

Space Complexity: O(k)*/
