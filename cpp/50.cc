class Solution {
public:
    double myPow(double x, int n) {
        if(x == 1)
            return 1;
        if(x == -1)
            return n % 2 ? -1 : 1;
        double ret = 1.0;
        int tmp = abs(n);
        while(tmp--)
        {
            ret *= x;
            if(ret == 0)
                return 0;
        }
        if(n < 0)
            ret = 1 / ret;
        return ret;
    }
};