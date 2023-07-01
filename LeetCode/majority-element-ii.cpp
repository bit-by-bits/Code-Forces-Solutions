class Solution
{
public:
    vector<int> majorityElement(vector<int> &nums)
    {

        int SIZE = nums.size();
        if (SIZE == 1)
            return {nums[0]};

        pair<int, int> firstNum = {-1, 0};
        pair<int, int> secondNum = {-1, 0};

        for (int i = 0; i < SIZE; i++)
        {

            if (nums[i] == firstNum.first)
            {
                firstNum.second++;
            }

            else if (nums[i] == secondNum.first)
            {
                secondNum.second++;
            }

            else if (!firstNum.second)
            {
                firstNum = {nums[i], 1};
            }

            else if (!secondNum.second)
            {
                secondNum = {nums[i], 1};
            }

            else
            {
                firstNum.second--;
                secondNum.second--;
            }
        }

        firstNum.second = 0;
        secondNum.second = 0;

        for (int i = 0; i < SIZE; i++)
        {
            if (nums[i] == firstNum.first)
            {
                firstNum.second++;
            }

            else if (nums[i] == secondNum.first)
            {
                secondNum.second++;
            }
        }

        vector<int> ans;
        if (firstNum.second > floor(SIZE / 3.0))
        {
            ans.push_back(firstNum.first);
        }

        if (secondNum.second > floor(SIZE / 3.0))
        {
            ans.push_back(secondNum.first);
        }

        return ans;
    }
};