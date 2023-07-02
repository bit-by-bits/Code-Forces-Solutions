class Solution
{
public:
    int first(vector<int> arr, int x)
    {

        int str = 0;
        int end = arr.size() - 1;

        int mid = 0;
        int ret = -1;

        while (str <= end)
        {
            mid = str + (end - str) / 2;

            if (arr[mid] < x)
                str = mid + 1;
            else
            {
                if (x == arr[mid])
                    ret = mid;
                end = mid - 1;
            }
        }

        return ret;
    }

    int last(vector<int> arr, int s, int x)
    {

        int str = max(0, s);
        int end = arr.size() - 1;

        int mid = 0;
        int ret = -1;

        while (str <= end)
        {
            mid = str + (end - str) / 2;

            if (x < arr[mid])
                end = mid - 1;
            else
            {
                if (arr[mid] == x)
                    ret = mid;
                str = mid + 1;
            }
        }

        return ret;
    }

    vector<int> searchRange(vector<int> &arr, int key)
    {
        int str = first(arr, key);
        int end = last(arr, str, key);

        return {str, end};
    }
};