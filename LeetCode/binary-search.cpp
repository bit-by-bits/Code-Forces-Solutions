class Solution
{
public:
    int search(vector<int> &arr, int target)
    {

        int str = 0;
        int end = arr.size() - 1;

        if (end == 0 && arr[0] == target)
            return 0;
        int mid = str + (end - str) / 2;

        while (str <= end)
        {

            if (arr[mid] < target)
                str = mid + 1;
            else if (target < arr[mid])
                end = mid - 1;
            else
                return mid;

            mid = str + (end - str) / 2;
        }

        return -1;
    }
};