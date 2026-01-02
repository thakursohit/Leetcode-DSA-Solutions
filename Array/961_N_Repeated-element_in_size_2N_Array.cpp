class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size() / 2;

        for (int x : nums) {
            mp[x]++;
        }

        for (const auto p : mp) {
            if (p.second == n)
                return p.first;
        }
        return -1;
    }
};
