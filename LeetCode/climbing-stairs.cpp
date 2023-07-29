class Solution
{
public:
    int climb(int N, vector<int> &t)
    {

        if (N < 3)
            return N;
        if (t[N] != -1)
            return t[N];
        return (t[N] = climb(N - 1, t) + climb(N - 2, t));
    }

    int climbStairs(int n)
    {

        vector<int> t(n + 1, -1);
        return climb(n, t);
    }
};