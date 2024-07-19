class Solution {
public:
    int addDigits(int num) {
        int ans;
        while(1){
            int rem;
            ans=0;
            while(num!=0){
                rem=num%10;
                ans+=rem;
                num=num/10;
            }
            if(ans/10==0) break;
            else num=ans;
        }
        return ans;
    }
};
