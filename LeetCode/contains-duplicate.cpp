class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        const int limit = nums.size();
        for (int i = 1; i < limit; i++)
        {
            if (nums[i - 1] == nums[i])
                return true;
        }

        return false;
    }
};