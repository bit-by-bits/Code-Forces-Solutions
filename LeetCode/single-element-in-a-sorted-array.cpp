class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {

        const int N = nums.size();

        int str = 0;
        int end = N - 1;
        int mid = 0;

        while (str <= end)
        {

            mid = str + (end - str) / 2;

            bool bool1 = ((mid == N - 1) ? false : (nums[mid] == nums[mid + 1]));
            bool bool2 = ((mid == 0) ? false : (nums[mid] == nums[mid - 1]));
            bool bool3 = (mid % 2);

            if (!bool1 && !bool2)
            {
                return nums[mid];
            }

            else if (bool1 && !bool2)
            {
                if (bool3)
                    end = mid - 1;
                else
                    str = mid + 2;
            }

            else
            {
                if (bool3)
                    str = mid + 1;
                else
                    end = mid - 2;
            }
        }

        return -1;
    }
};