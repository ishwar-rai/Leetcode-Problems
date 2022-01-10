class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0)
            return false;
        int l = log10(n)/log10(3);
        if(pow(3,l)==n)
            return true;
        return false;
        
    }
};