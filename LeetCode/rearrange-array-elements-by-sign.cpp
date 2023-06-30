class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {

        int SIZE = nums.size();
        int pos = 0, neg = 1;
        vector<int> newNums(SIZE);

        for (int i = 0; i < SIZE; i++)
        {
            if (nums[i] > 0)
            {
                newNums[pos] = nums[i];
                pos += 2;
            }

            else
            {
                newNums[neg] = nums[i];
                neg += 2;
            }
        }

        return newNums;
    }
};