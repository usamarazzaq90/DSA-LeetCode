class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int maxLength=0;
       int l=0,r=0;
       int n=s.size();
       vector<int>hash(256,-1);
       while(r<n){
            if(hash[s[r]]!=-1){
                if(hash[s[r]]>=l){
                    l=hash[s[r]]+1;
                }
            }
            hash[s[r]]=r;
            int len=r-l+1;
            maxLength=max(maxLength,len);
            r++;
            
       }
       return maxLength;
    }
};
