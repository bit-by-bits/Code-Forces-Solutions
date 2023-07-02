class Solution
{
public:
    bool search(vector<int> &arr, int target)
    {

        int str = 0;
        int mid = 0;
        int end = arr.size() - 1;

        while (str <= end)
        {

            mid = str + (end - str) / 2;
            if (target == arr[mid])
                return true;

            if (arr[str] == arr[mid] && arr[end] == arr[mid])
            {
                str++;
                end--;
            }

            else if (arr[str] <= arr[mid])
            {

                if (arr[str] <= target && target < arr[mid])
                    end = mid - 1;
                else
                    str = mid + 1;
            }

            else
            {

                if (arr[end] >= target && target > arr[mid])
                    str = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return false;
    }
};