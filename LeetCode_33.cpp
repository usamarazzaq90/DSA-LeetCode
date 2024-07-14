class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size=nums.size();
        int low=0, high=size-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(target==nums[mid]) return mid;
            if(nums[mid]<=nums[high]){             //right side sorted
                if(target>nums[mid] && target<=nums[high]){
                    low=mid+1;
                }
                else high=mid-1;
            }
            else if(nums[low]<=nums[mid]){        //left side soted
                if(target<nums[mid] && target>=nums[low]){
                    high=mid-1;
                }
                else low=mid+1;
            }
        }
        return -1;
    }
};
