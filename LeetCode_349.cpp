class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        unordered_set<int> set1,set2;

        for(auto it: nums1){
            set1.insert(it);
        } 
        for(auto it: nums2){
            set2.insert(it);
        } 

        for(auto it: set1){
            if(set2.find(it)!=set2.end()){
                ans.push_back(it);
            }
        }

        return ans;
    }
};
