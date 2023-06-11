class Solution
{
public:
    int mySqrt(int x)
    {
        int str = 1;
        int end = x / 2 + 1;
        int mid = str + (end - str) / 2;

        if (x == 0)
            return 0;

        while (str < end)
        {
            cout << str << ' ' << mid << ' ' << end << endl;
            if (mid < x / mid)
            {
                if (str == mid)
                    break;
                else
                    str = mid;
            }

            else if (mid > x / mid)
                end = mid - 1;
            else
                return mid;

            mid = str + (end - str) / 2;
        }

        if ((str + 1) <= x / (str + 1))
            return (str + 1);
        else
            return str;
    }
};