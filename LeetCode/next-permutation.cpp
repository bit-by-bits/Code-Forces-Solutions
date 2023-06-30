class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {

        int SIZE = nums.size();
        int pivot = -1;

        for (int i = SIZE - 1; i > 0; i--)
        {
            if (nums[i - 1] < nums[i])
            {
                pivot = i - 1;
                break;
            }
        }

        if (pivot != -1)
        {
            nums.push_back(INT_MIN);
            for (int i = pivot + 1; i < SIZE; i++)
            {
                if (nums[i] >= nums[pivot] && nums[i + 1] <= nums[pivot])
                {
                    swap(nums[pivot], nums[i]);
                    break;
                }
            }

            nums.pop_back();
        }

        reverse(nums.begin() + pivot + 1, nums.end());
        return;
    }
};