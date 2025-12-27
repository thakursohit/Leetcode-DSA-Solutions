/*Complexity
Time	O(n)
Space	O(1)*/

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};


// gfg Rotate Array by One

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+1);
        reverse(arr.begin()+1,arr.end());
    }
};

// for one array rotate

// for one rotation only
// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++){
            swap(arr[i],arr[n-1]);
        }
    }
};
