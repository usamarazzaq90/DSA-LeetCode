class Solution {
public:
    vector <int> caseOne(vector<int>& code, int k){
        int sumOfK=0;
        for(int i=0;i<k;i++){
            sumOfK+=code[i];
        }
        vector <int> result;
        for(int i=0;i<code.size();i++){
            sumOfK-=code[i];
            sumOfK+=code[(i+k)%code.size()];
            result.push_back(sumOfK);
        }
        return result;
    }

    vector <int> caseTwo(vector<int>& code, int k){
        reverse(code.begin(),code.end());
        vector <int> result=  caseOne(code,-k);
        reverse(result.begin(),result.end());
        return result;
    }

    vector<int> decrypt(vector<int>& code, int k) {
        if(k>0) return caseOne(code,k);
        return caseTwo(code,k);
    }
};
