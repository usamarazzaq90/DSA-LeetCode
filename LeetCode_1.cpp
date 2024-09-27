class Solution {
public:
    // Method # 1 (Brute Force)
    // vector<int> twoSum(vector<int>& nums, int target) {
    //     vector <int> ans;
    //     for(int i=0;i<nums.size();i++){
    //         for(int j=i+1;j<nums.size();j++){
    //             if(nums[i]+nums[j]==target){
    //                 ans.push_back(i);
    //                 ans.push_back(j);
    //                 return ans;
    //             }
    //         }
    //     }
    //     return ans;

    // Method # 2 (Optimized)
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ans;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int x=target-nums[i];
            if(mp.find(x)!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[x]);
                return ans;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};
