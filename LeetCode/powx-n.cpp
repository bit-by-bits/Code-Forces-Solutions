class Solution
{
public:
    double myPow(double x, int n)
    {
        if (n == INT_MAX)
            return (abs((int)x) == 1) ? x : 0;
        if (n == INT_MIN)
            return (abs((int)x) == 1) ? 1 : 0;

        if (n == 0)
            return 1.0;
        else if (n < 0)
            return 1.0 / myPow(x, -n);
        else
            return x * myPow(x, n - 1);
    }
};