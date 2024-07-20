class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0,high=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(target==nums[mid]) return mid;
            if(target>nums[mid]){
                if(target>nums[high]) return high+1;
                low=mid+1;
            }
            else if(target<nums[mid]){
                if(target<nums[low]) return low;
                high=mid-1;
            }
        }
        return -1;
    }
};
