
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {

        int maxEle = *max_element(nums.begin(), nums.end());

        if (maxEle > 0)
        {
            int maxSum = 0, currSum = 0;
            const int SIZE = nums.size();

            for (int i = 0; i < SIZE; i++)
            {
                if (nums[i] + currSum < 0)
                {
                    currSum = 0;
                }

                else
                {
                    currSum += nums[i];
                }

                maxSum = max(currSum, maxSum);
            }

            return maxSum;
        }

        else
        {
            return maxEle;
        }
    }
};