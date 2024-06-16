class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        //selection Sort
        for(int i=0;i<heights.size()-1;i++){
            int maxI=i;
            for(int j=i+1;j<heights.size();j++){
                if(heights[j]>heights[maxI]){
                    maxI=j;
                }
            }
            if(maxI!=i){
                swap(names[i],names[maxI]);
                swap(heights[i],heights[maxI]);
            }
        }
        return names;
    }
};
