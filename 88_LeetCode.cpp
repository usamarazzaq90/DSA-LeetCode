class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a=0,b=0;
        while(a<m && b<n){
            if(nums1[a]<nums2[b]){
                nums1.push_back(nums1[a]);
                a++;
            } else{
                nums1.push_back(nums2[b]);
                b++;
            }
        }
        while(a < m){
            nums1.push_back(nums1[a]);
            a++;
        }
        while(b<n){
            nums1.push_back(nums2[b]);
            b++;
        }
        for(int i=0;i<m+n;i++){
            nums1.erase(nums1.begin());
        }
    }
};
