class Solution {
public:
            //Method # 1
    // bool isAnagram(string s, string t) {
    //     if(s.size()!=t.size()) return false;
    //     sort(s.begin(),s.end());
    //     sort(t.begin(),t.end());
    //     if(s==t) return true;
    //     return false;
    // }

            //Method # 2
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        vector<int> fr(26);
        for(int i=0;i<s.size();i++){
            fr[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++){
            int x=--fr[t[i]-'a'];
            if(x<0) return false;
        }
        return true;
    }
};
