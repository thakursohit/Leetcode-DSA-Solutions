class Solution {
public:
    void reverseString(vector<char>& s) {
        for(int i=0;i<s.size()/2;i++){
            swap(s[i],s[s.size()-1-i]);
        }
        
    }
};

/*Time Complexity: O(n)

Space Complexity: O(1)*/
