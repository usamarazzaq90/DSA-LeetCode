class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        //Insertion Sort
        if(nums.size()<=2) return -1;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j>0;j--){
                if(nums[j]<nums[j-1]){
                    swap(nums[j],nums[j-1]);
                }
            }
        }
        return nums[1];
    }
};
