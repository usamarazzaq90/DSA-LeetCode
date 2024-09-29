class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map <string, vector<string>> mp;    //map to store all anagrams
        for(int i=0;i<strs.size();i++){
            string s=strs[i];
            sort(s.begin(),s.end());
            mp[s].push_back(strs[i]);     //same anagram stored as a vector of strings in map
        }

        //result vector of vector strings, size equal to the size of the map i.e, no. of rows in map
        vector<vector<string>> res(mp.size());   
        int index=0;
        for(auto x : mp){
            // vector<string> temp=x.second;  (same as line below)
            auto temp=x.second;
            for(auto y:temp){
                res[index].push_back(y);
            }
            index++;
        }
        return res;
    }
};
