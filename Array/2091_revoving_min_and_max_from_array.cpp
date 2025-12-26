/*TC = O(n)
SC = O(1)
*/

#include <algorithm>
#include <vector>
using namespace std;

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        auto min_it = min_element(nums.begin(), nums.end());
        auto max_it = max_element(nums.begin(), nums.end());

        int min_ind = distance(nums.begin(), min_it);
        int max_ind = distance(nums.begin(), max_it);

        int left_only = max(min_ind, max_ind) + 1;
        int right_only = n - min(min_ind, max_ind);
        int both_sides_1 = (min_ind + 1) + (n - max_ind);
        int both_sides_2 = (max_ind + 1) + (n - min_ind);

        return min({left_only, right_only, both_sides_1, both_sides_2});
    }
};
