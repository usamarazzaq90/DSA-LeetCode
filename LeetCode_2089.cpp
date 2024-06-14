class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector <int> ans;
        int size=nums.size();
        //Selection Sort
        for(int i=0;i<size-1;i++){
            int minI=i;
            for(int j=i+1;j<size;j++){
                if(nums[j]<nums[minI]){
                    minI=j;
                }
            }
            if(minI!=i){
                swap(nums[i],nums[minI]);
            }
        }
        for(int i=0;i<size;i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
