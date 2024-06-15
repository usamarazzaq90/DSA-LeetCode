class Solution {
public:
    int heightChecker(vector<int>& heights) {
        if(heights.size()==1) return 0;
        vector <int> expected;
        expected=heights;
        for(int i=0;i<expected.size()-1;i++){
            int minI=i;
            for(int j=i+1;j<expected.size();j++){
                if(expected[j]<expected[minI]){
                    minI=j;
                }
            }
            if(minI!=i){
                swap(expected[i],expected[minI]);
            }
        }
        int count=0;
        for(int k=0;k<expected.size();k++){
            if(heights[k]!=expected[k]) count++;
        }
        return count;
    }
};
