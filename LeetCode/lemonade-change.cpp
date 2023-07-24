class Solution
{
public:
    bool lemonadeChange(vector<int> &bills)
    {

        vector<int> count = {0, 0, 0};
        for (int x : bills)
        {
            count[x / 10]++;

            if (x == 10)
            {
                if (count[0])
                    count[0]--;
                else
                    return false;
            }

            else if (x == 20)
            {
                if (count[1] && count[0])
                    count[1]--, count[0]--;
                else if (count[0] > 2)
                    count[0] -= 3;
                else
                    return false;
            }
        }

        return true;
    }
};