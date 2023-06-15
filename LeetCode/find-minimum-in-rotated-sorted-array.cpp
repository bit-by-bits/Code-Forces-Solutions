class Solution
{
public:
    int findMin(vector<int> &arr)
    {

        int str = 0;
        int mid = 0;
        int end = arr.size() - 1;

        if (arr[end] >= arr[str])
            return arr[str];
        if (arr[0] > arr[1])
            return arr[1];

        while (str < end)
        {
            mid = str + (end - str) / 2;

            if (arr[mid - 1] > arr[mid])
                return arr[mid];
            else if (arr[mid] > arr[0])
                str = mid + 1;
            else
                end = mid - 1;
        }

        return arr[str];
    }
};