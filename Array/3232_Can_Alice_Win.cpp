class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int dou=0;
        int sin=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>9){
                dou = dou + nums[i];
            }
            else{
                sin = sin+nums[i];
            }
        }
        return dou!=sin;
        
    }
};
