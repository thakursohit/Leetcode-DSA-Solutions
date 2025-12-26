class Solution {
public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int> s;  // stores unique elements sorted automatically

        for(int x : a) s.insert(x);
        for(int x : b) s.insert(x);

        return vector<int>(s.begin(), s.end());  // convert set to vector
    }
};

/*
Space Complexity

set stores all unique elements → O(n + m)

Vector copy → O(n + m)

✅ Total Space: O(n + m)
*/
