class Solution {
public:
    int Start_Pos(vector <int> &A, int size, int target){
        int low=0, high=size-1;
        int result=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if (target==A[mid]){
                result=mid;
                high=mid-1;
            }
            else if (target<A[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return result;
    }

    int End_Pos(vector <int> &A, int size, int target){
        int low=0, high=size-1;
        int result=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if (target==A[mid]){
                result=mid;
                low=mid+1;
            }
            else if (target<A[mid])
                high=mid-1;
            else
                low=mid+1;
        }
        return result;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int size=nums.size();
        vector <int> output;
        int start_pos=Start_Pos(nums,size,target);
        int end_pos=End_Pos(nums,size,target);
        output.push_back(start_pos);
        output.push_back(end_pos);
        return output;
    }
};
