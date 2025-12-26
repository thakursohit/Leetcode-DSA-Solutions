/*Complexity

Time: O(n) ✅ (single pass)
When to use Dutch Flag Algorithm

Use it when:

Only 3 unique values

Sorting without extra space

One-pass solution required

Common problems:

Sort Colors

3-way partitioning

Pivot-based partition

Space: O(1) ✅ (no extra memory)*/


class Solution {
public:
    void sortColors(vector<int>& nums) {
       int low = 0;
       int mid = 0;
       int high = nums.size()-1;
       while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;

        }
        else if(nums[mid]==1){
            //swap(nums[mid],nums[high]);
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
       }
        
    }
};
