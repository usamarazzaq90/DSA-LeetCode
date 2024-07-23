class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> mp;
        for(auto i : s){
            mp[i]++;
        }

        for(auto i: mp){
            if(i.second != mp[s[0]]){
                return false;
            }
        }
        return true;
    }
};
