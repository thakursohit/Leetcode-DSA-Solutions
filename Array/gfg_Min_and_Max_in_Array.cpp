class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        vector<int> ans;

        auto min_no = *min_element(arr.begin(), arr.end());
        auto max_no = *max_element(arr.begin(), arr.end());

        ans.push_back(min_no);
        ans.push_back(max_no);

        return ans;
    }
};


//tc = 0(n) sc = 0(1);

/*class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        auto p = minmax_element(arr.begin(), arr.end());
        return {*p.first, *p.second};
    }
};

*/


