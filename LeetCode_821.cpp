class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> answer;
        int left,right;
        for(int i=0;i<s.size();i++){
            left=i;
            right=i;
            for(int j=0; j<s.size(); j++){
                if(s[left]==c){
                    answer.push_back(abs(i-left));
                    break;
                }
                else if (s[right]==c){
                    answer.push_back(abs(i-right));
                    break;
                }
                else{
                    if(left!=0) left--;
                    if(right!=s.size()) right++;
                }
            }
        }
        return answer;
    }
};
