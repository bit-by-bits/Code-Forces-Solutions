class Solution
{
public:
    bool check(vector<int> &piles, int h, int k)
    {

        int adder = 0;
        int addend = 0;

        const int LIMIT = piles.size();

        for (int i = 0; i < LIMIT; i++)
        {
            addend = ceil((double)piles[i] / k);

            if (adder > h - addend)
                return false;
            adder += addend;
        }

        return true;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {

        int str = 0;
        int end = *max_element(piles.begin(), piles.end());

        int mid = 0, ans = -1;
        while (str < end)
        {
            mid = str + (end - str + 1) / 2;

            if (check(piles, h, mid))
            {
                ans = mid;
                end = mid - 1;
            }
            else
                str = mid;
        }

        return ans;
    }
};