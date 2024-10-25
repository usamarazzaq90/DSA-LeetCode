class Solution {
public:
    int f(int index, string& s, unordered_map<string,bool>dict, vector<int>& dp){
        //Base condition
        if(index>=s.size()) return 1;

        //already computed
        if(dp[index]!=-1) return dp[index];

        //Try all cuts
        string curr="";
        for(int i=index;i<s.size();i++){
            curr.push_back(s[i]);
            //if current string is present in the dict, check for remaining part
            if(dict[curr] && f(i+1,s,dict,dp)){
                return dp[index]=1;
            }
        }
        //split not possible
        return 0;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        //Store dictionary words into map
        unordered_map<string,bool>dict;
        for(auto& word:wordDict){
            dict[word]=true;
        }

        vector<int>dp(s.size(),-1);    //Memo
        //Write recursion function to check all cuts
        //index,string,dict,dp
        return f(0,s,dict,dp);
    }
};
