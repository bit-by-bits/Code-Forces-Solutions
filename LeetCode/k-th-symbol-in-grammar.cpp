class Solution
{
public:
    int kthGrammar(int n, int k)
    {

        if (!k)
            k = pow(2, n - 1);

        if (n == 1)
            return 0;
        int near = pow(2, n - 2);

        if (k > near)
            return !kthGrammar(n - 1, k % near);
        else
            return kthGrammar(n - 1, k);
    }
};