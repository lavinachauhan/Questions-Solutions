class Solution {
    long long quotient(long long dividend, long long divisor)
    {
        long long s = 0;
        long long e = dividend;
        long long ans = 0;

        while(s <= e)
        {
            long long mid = s+((e-s) >> 1) ;
            if(mid * divisor <= dividend)
            {
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        return ans;
    }
public:
    long long divide(long dividend, long divisor) {

        long long ans = quotient(abs(dividend), abs(divisor));

        if(dividend < 0 && divisor > 0 || divisor < 0 && dividend > 0)
        {
            ans *= -1; 
        }

        if(dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX;
        }
        return ans;
    }
};