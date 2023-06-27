class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {

        int allXor = 0;
        const int SIZE = nums.size();
        for (int i = 0; i < SIZE; i++)
        {
            allXor ^= nums[i];
        }

        for (int i = 0; i <= SIZE; i++)
        {
            allXor ^= i;
        }

        return allXor;
    }
};