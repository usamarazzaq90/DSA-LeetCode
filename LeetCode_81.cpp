class Solution {
public:
    int BinarySearch(vector<int>& A, int size, int x){
        int low=0, high=size-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(x==A[mid]) return mid;
            if(A[low]==A[mid] && A[mid]==A[high]){
                low++;
                high--;
                continue;
            }
            if(A[mid]<=A[high]){
                if(x>A[mid] && x<=A[high]){
                    low=mid+1;
                }
                else high=mid-1;
            }
            else if (A[low]<=A[mid]){
                if(x>=A[low] && x<A[mid]){
                    high=mid-1;
                }
                else low=mid+1;
            }
        }
        return -1;
    }
    bool search(vector<int>& nums, int target) {
        int size=nums.size();
        int x=BinarySearch(nums,size,target);
        if(x!=-1) return true;
        return false;
    }
};
