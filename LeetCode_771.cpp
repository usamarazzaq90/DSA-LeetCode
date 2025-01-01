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
        // for(auto i: stones ){
        //     for(auto  j: jewels){
        //         if (i==j) count++;
        //     }
        // }

        // Method # 3   (Using map)
        map <char,int> mp;
        for(int i=0;i<jewels.size();i++){
            mp[jewels[i]]++;
        }
        for(int j=0;j<stones.size();j++){
            if (mp[stones[j]]) count++;
        }
        
        return count;
    }
};
