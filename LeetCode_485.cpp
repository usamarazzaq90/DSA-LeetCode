class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxLen=0, zeros;
        for(int i=0;i<nums.size();i++){
            zeros=0;
            for(int j=i;j<nums.size();j++){
                if(nums[j]==0) zeros++;
                if(zeros==0){
                    maxLen=max(maxLen,j-i+1);
                }
                else break;
            }
        }
        return maxLen;
    }
};
