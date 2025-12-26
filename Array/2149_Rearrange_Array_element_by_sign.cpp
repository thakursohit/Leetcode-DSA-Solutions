//O(n) + O(n) = O(n)
/*Time Complexity = O(n)

📦 Space Complexity (bonus, interviewer may ask)

pos → n/2

neg → n/2

ans → n

✔ Space Complexity:

O(n) (extra space)*/

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg;
        vector<int> pos;
        vector<int> ans;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 0)
                neg.push_back(nums[i]);
            else
                pos.push_back(nums[i]);
        }

        for(int i = 0; i < neg.size(); i++){
            ans.push_back(pos[i]);
            ans.push_back(neg[i]);
        }

        return ans;
    }
};

