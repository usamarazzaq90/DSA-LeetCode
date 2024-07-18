class Solution {
public:
    string addBinary(string a, string b) {
        int len_a=a.size();
        int len_b=b.size();
        string s;
        if(len_a>len_b){
            b=s.append(len_a-len_b,'0')+b;
        }
        else if(len_b>len_a){
            a=s.append(len_b-len_a,'0')+a;
        }

        int carry=0;
        string ans;

        for(int i=a.size()-1; i>=0; i--){
            int sum=(a[i]-'0')+(b[i]-'0')+carry;     //also converting char into integers
            ans=to_string(sum%2)+ans;
            carry=sum/2;
        }
        if(carry==1) ans="1"+ans;
        return ans;
    }
};
