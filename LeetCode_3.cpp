class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector< int > mpp(256,-1);
        int l=0;
        int r=0;
        int maxlength=0;
        while(r<s.size()) {
            if(mpp[s[r]]!=-1) {
                 if(mpp[s[r]]>=l) l = mpp[s[r]] +1;
                 }
           
            mpp[s[r]] = r;
            maxlength = max(maxlength,r-l+1);
            r++;
        }
        return maxlength;
    //    int maxLength=0;
    //    int l=0,r=0;
    //    int n=s.size();
    //    vector<int>hash(256,-1);
    //    while(r<n){
    //         if(hash[s[r]]!=-1){
    //             if(hash[s[r]]>=l){
    //                 l=hash[s[r]]+1;
    //             }
    //             int len=r-l+1;
    //             maxLength=max(maxLength,len);
    //             hash[s[r]]=r;
    //             r++;
    //         }
    //    }
    //    return maxLength;
    }
};
