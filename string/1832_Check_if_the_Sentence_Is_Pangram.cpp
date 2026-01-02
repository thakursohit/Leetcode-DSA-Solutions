class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.length()<26) return false;
        unordered_map<char,int> mp;
        for(auto c:sentence){
            mp[c]++;
        }
        for(auto i:mp){
            if(i.second==0) return false;
        }
        return true;
        
    }
};
