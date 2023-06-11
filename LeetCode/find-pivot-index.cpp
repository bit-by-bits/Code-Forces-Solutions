class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {

        int lts = 0;
        int rts = accumulate(nums.begin(), nums.end(), 0);

        for (int i = 0; i < nums.size(); i++)
        {
            rts -= nums[i];

            if (lts == rts)
                return i;
            lts += nums[i];
        }

        return -1;
    }
};