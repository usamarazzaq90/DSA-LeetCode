class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Method # 1
        int insertIndex=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]!=nums[i]){
                nums[insertIndex]=nums[i];
                insertIndex++;
            }
        }
        return insertIndex;
        
        //Method # 2 (Using Hashmap)
        // map <int, int> mpp;
        // for(int i=0;i<nums.size();i++){
        //     if(mpp.find(nums[i])==mpp.end()){
        //         mpp[nums[i]]=i;
        //     }
        // }
        // nums.clear();
        // for(auto it : mpp){
        //     nums.push_back(it.first);
        // }
        // return nums.size();
    }
};
