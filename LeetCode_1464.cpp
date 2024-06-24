class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //Selection Sort
        const int size=nums.size();
        for(int i=0;i<size-1;i++){
            int minI=i;
            for(int j=i+1;j<size;j++){
                if(nums[j]<nums[minI]){
                    minI=j;
                }
            } 
                swap(nums[i],nums[minI]); 
        }
        int i=size-2, j=size-1;
        int ans=(nums[i]-1)*(nums[j]-1);
        return ans;
    }
};
