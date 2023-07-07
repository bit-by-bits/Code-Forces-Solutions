class Solution
{
private:
    int check(long long int n, long long int m, long long int mid)
    {

        long long int MID = 1, N = n;
        while (MID < m && N)
        {
            MID *= mid;
            N--;
        }

        if (MID < m)
            return +1;
        else if (MID > m || N)
            return -1;
        else
            return 0;
    }

public:
    int NthRoot(long long int n, long long int m)
    {
        long long int str = 0;
        long long int end = m;

        if (m < 2)
            return m;

        while (str <= end)
        {

            long long int mid = str + (end - str) / 2;

            switch (check(n, m, mid))
            {
            case 0:
                return mid;
            case +1:
                str = mid + 1;
                break;
            case -1:
                end = mid - 1;
                break;
            default:
                break;
            }
        }

        return -1;
    }
};