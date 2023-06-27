class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {

        if (*max_element(nums.begin(), nums.end()) == 0)
        {
            return 0;
        }

        if (*min_element(nums.begin(), nums.end()) == 1)
        {
            return nums.size();
        }

        int currNum = 0, maxNum = 0;
        const int SIZE = nums.size();

        for (int i = 0; i < SIZE; i++)
        {
            if (nums[i])
            {
                currNum++;
            }

            else
            {
                maxNum = max(currNum, maxNum);
                currNum = 0;
            }
        }

        maxNum = max(currNum, maxNum);
        return maxNum;
    }
};