class Solution {
public:
    bool isPalindrome(int x) {
        string str=to_string(x);
        int left=0, right=str.size()-1;
        while(left<=right){
            char temp=str[left];
            str[left]=str[right];
            str[right]=temp;
            left++;
            right--;
        }
        if(str==to_string(x)) return true;
        else return false;
    }
};
