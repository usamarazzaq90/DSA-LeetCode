class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int count=0;
        int l=0,r=0;
        double product=1;
        while(r<nums.size()){
            product*=nums[r];
            while(l<=r && product>=k){
                product/=nums[l];
                l++;
            }
            if(product<k){
                count+=(r-l+1);
            }
            r++;
        }
        return count;
    }
};
