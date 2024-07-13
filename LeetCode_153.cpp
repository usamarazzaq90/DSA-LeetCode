class Solution {
public:
    int findMin(vector<int>& nums) {
        int size=nums.size();
        int low=0, high=size-1;
        while(low<=high){
            if(nums[low]<=nums[high]) return nums[low];
            int mid=(low+high)/2;
            int next=(mid+1)%size;
            int prev=(mid+size-1)%size;
            if(nums[mid]<=nums[prev] && nums[mid]<=nums[next]) return nums[mid];
            else if (nums[mid]<=nums[high]) high=mid-1;
            else if (nums[mid]>=nums[high]) low=mid+1;
        }  
        return -1;
    }
};
