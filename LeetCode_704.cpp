class Solution {
public:
    int BinarySearch(vector<int> &A, int size, int target){
        int low=0, high=size-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(target==A[mid]) return mid;
            else if(target<A[mid]) high=mid-1;
            else low=mid+1;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int size=nums.size();
        return BinarySearch(nums,size,target);
    }
};
