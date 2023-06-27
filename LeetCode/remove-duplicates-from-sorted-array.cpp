class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {

        int i = 0;
        while (i < nums.size())
        {

            while (i < nums.size() - 1 && nums[i] == nums[i + 1])
            {
                nums.erase(nums.begin() + i + 1);
                if (i >= nums.size() - 1)
                    return nums.size();
            }

            i++;
        }

        return nums.size();
    }
};