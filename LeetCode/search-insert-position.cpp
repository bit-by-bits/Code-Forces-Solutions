class Solution
{
public:
    int searchInsert(vector<int> &arr, int key)
    {
        int str = 0;
        int end = arr.size() - 1;
        int mid = 0;

        while (str <= end)
        {
            mid = str + (end - str) / 2;

            if (arr[mid] < key)
                str = mid + 1;
            else if (key < arr[mid])
                end = mid - 1;
            else
                return mid;
        }

        return str;
    }
};