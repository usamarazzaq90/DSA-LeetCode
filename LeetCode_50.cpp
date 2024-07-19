class Solution {
public:
    double myPow(double x, int n) {
        long newN=n;
        bool isNeg= (n<0) ? (newN*=-1,1) : 0;
        double ans=1.0;
        while(newN!=0){
            if(newN%2==0){
                x*=x;
                newN/=2;
            }
            else{
                ans=ans*x;
                newN--;
            }
        }
        if(isNeg) ans=1/ans;
        return ans;
    }
};
