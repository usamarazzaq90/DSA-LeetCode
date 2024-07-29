class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector <int> ans;
        // unordered_set <int> set1{nums1};
        int req_index;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if (nums1[i]==nums2[j]){
                    req_index=j;
                    break;
                }
            }
            if(req_index==nums2.size()-1) {
                ans.push_back(-1);
                }
            else {
                bool found_greater=false;
                for(int i=req_index+1;i<nums2.size();i++){
                    if(nums2[i]>nums2[req_index]){
                        ans.push_back(nums2[i]);
                        found_greater=true;
                        break;
                    }
                }
                if (found_greater==false) ans.push_back(-1);
                }
        }
        return ans;
    }
};
