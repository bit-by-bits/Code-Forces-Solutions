class Solution
{
public:
    bool check(vector<int> nums, int mid, int threshold)
    {

        int count = 0;
        int SIZE = nums.size();

        for (int i = 0; i < SIZE; i++)
        {
            count += ceil(nums[i] / (double)mid);
            if (count > threshold)
                return false;
        }

        return true;
    }

    int smallestDivisor(vector<int> &nums, int threshold)
    {

        int str = 1;
        int end = *max_element(nums.begin(), nums.end());

        int res = end;
        while (str <= end)
        {

            int mid = str + (end - str) / 2;
            if (check(nums, mid, threshold))
            {
                res = mid;
                end = mid - 1;
            }
            else
                str = mid + 1;
        }

        return res;
    }
};