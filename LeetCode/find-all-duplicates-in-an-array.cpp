class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        int temp = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            const int temp = abs(nums[i]) - 1;

            if (nums[temp] < 0)
            {
                ans.push_back(temp + 1);
            }
            else
            {
                int num = nums[temp];
                nums[temp] = -num;
            }
        }

        return ans;
    }
};