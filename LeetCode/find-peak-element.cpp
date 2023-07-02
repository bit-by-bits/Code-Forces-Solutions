class Solution
{
public:
    int findPeakElement(vector<int> &nums)
    {

        const int N = nums.size();
        if (N == 1 || nums[0] > nums[1])
            return 0;
        if (nums[N - 2] < nums[N - 1])
            return N - 1;

        int str = 0;
        int mid = 0;
        int end = N - 1;

        while (str <= end)
        {

            mid = str + (end - str) / 2;

            bool bool1 = (mid == 0) ? true : nums[mid - 1] < nums[mid];
            bool bool2 = (mid == N - 1) ? true : nums[mid + 1] < nums[mid];

            if (bool1 && bool2)
                return mid;
            else if (bool1 && !bool2)
                str = mid + 1;
            else
                end = mid - 1;
        }

        return end;
    }
};