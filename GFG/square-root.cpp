class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        int str = 0;
        int end = x;

        int res = x;
        while (str <= end)
        {

            int mid = str + (end - str) / 2;

            if (mid > x / (double)mid)
                end = mid - 1;
            else if (mid < x / (double)mid)
            {
                res = mid;
                str = mid + 1;
            }
            else
                return mid;
        }

        return res;
    }
};