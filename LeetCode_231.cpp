class Solution {
public:
    bool isPowerOfTwo(int n) {
        for(int x=0; true; x++){
            if(n==pow(2,x)) return true;
            if(pow(2,x)>n) break;
        }
        return false;
    }
};
