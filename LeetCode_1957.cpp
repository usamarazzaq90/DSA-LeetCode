class Solution {
public:
    string makeFancyString(string s) {
        if(s.size()<3) return s;
        string ans;
        for(int i=0; i<=s.size()-2; i++){
            if(s[i]==s[i+1] && s[i]==s[i+2]){
                continue;
            }
            else{
                ans.push_back(s[i]);
            }
        }
        ans.push_back(s[s.size()-1]);
        return ans;
    }
};
