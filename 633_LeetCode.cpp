class Solution {
public:
    bool judgeSquareSum(int c) {
        long left=0;
        long right=sqrt(c);
        while(left<=right){
            if(left*left + right*right == c){
                return true;
            }
            if(left*left + right*right < c){
                left++;
            }
            if(left*left + right*right > c){
                right--;
            }
        }
        return false;
    }
};
