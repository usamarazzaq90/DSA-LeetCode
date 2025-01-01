class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count=0;
        // Method # 1
        // for(int i=0;i<stones.size();i++){
        //     for(int j=0;j<jewels.size();j++){
        //         if (stones[i]==jewels[j]) count++;
        //     }
        // }

        // Method # 2
        for(auto i: stones ){
            for(auto  j: jewels){
                if (i==j) count++;
            }
        }
        return count;
    }
};
