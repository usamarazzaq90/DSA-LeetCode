class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0, maxSum;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        maxSum=sum;
        int left=0;
        int right=k;
        while(right<nums.size()){
            sum-=nums[left];
            left++;

            sum+=nums[right];
            right++;

            maxSum=max(sum,maxSum);
        }
        return (double) maxSum/k;
    }
};
