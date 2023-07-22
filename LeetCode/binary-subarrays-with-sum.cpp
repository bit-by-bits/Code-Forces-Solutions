class Solution
{
public:
    int atMostK(vector<int> a, int k)
    {

        const int N = a.size();
        if (k < 0)
            return 0;

        int sum = 0, res = 0;
        int end = -1, str = 0;

        while (++end < N)
        {
            sum += a[end];
            while (str < N && sum > k)
                sum -= a[str++];
            res += end - str + 1;
        }

        return res;
    }

    int numSubarraysWithSum(vector<int> &a, int k)
    {
        return atMostK(a, k) - atMostK(a, k - 1);
    }
};