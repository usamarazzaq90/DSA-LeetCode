//Method 1: Using map
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto x:mp){
            if(x.second>1) return true;
        }
        return false;
    }
};

//Method 2: Using nested loop
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]) return true;
        }
        return false;
    }
};
