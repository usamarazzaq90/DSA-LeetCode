class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0;i<ransomNote.size();i++){
            int count=0;
            for(int j=0;j<magazine.size();j++){
                if(ransomNote[i]==magazine[j]){
                    magazine[j]='0';
                    count++;
                    break;
                }
            }
            if(count==0) return false;
        }
        return true;
    }
};
