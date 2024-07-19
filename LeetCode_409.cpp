class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        for(auto c:s) freq[c]++;
        int ans=0;
        bool isOdd=false;

        for(auto [c,fr] : freq){
            if(fr%2==0) ans=ans+fr;
            else{
                ans=ans+(fr-1);
                isOdd=true;
            }
        }
        ans=ans+isOdd;
        return ans;
    }
};
