class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        int i=0;
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i=i+2){
            swap(nums[i],nums[i-1]);
        }

        return nums;
        
    }
};
