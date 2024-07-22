class Solution {
public:
    int countGoodSubstrings(string s) {
        if(s.size()<3) return 0;
        int ans=0, left=0, right=2;
        unordered_set <char> uset;

        while(right<s.size()){
            for(int i=left;i<=right;i++){
                uset.insert(s[i]);
            }
            if(uset.size()==3) ans++;
            left++;
            right++;
            uset.erase(uset.begin(),uset.end());
        }
        return ans;
    }
};
