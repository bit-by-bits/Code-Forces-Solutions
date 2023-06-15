class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        const int SIZE = nums.size() - 1;
        if (SIZE == 0)
            return nums[0] == target ? 0 : -1;

        int str = 0;
        int end = SIZE;

        int mid = 0;
        int pivot = 0;

        if (nums[end] < nums[0])
        {
            while (str < end)
            {
                mid = str + (end - str) / 2;

                if (nums[0] < nums[mid])
                    str = mid + 1;
                else
                    end = mid;
            }

            if (end != SIZE && nums[end] > nums[end + 1])
                pivot = end + 1;
            else
                pivot = end;
        }

        if (target < nums[0])
        {
            str = pivot;
            end = SIZE;
        }

        else
        {
            str = 0;
            end = pivot ? pivot - 1 : SIZE;
        }

        cout << pivot << ' ' << nums[str] << ' ' << nums[end] << ' ' << target << endl;

        while (str < end)
        {
            mid = str + (end - str + 1) / 2;

            if (target < nums[mid])
                end = mid - 1;
            else
                str = mid;
        }

        return nums[str] == target ? str : -1;
    }
};