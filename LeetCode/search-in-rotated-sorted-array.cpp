class Solution
{
public:
    int findMin(vector<int> arr)
    {

        int str = 0;
        int mid = 0;
        int end = arr.size() - 1;

        if (arr.back() >= arr.front())
            return 0;

        while (str < end)
        {
            mid = str + (end - str) / 2;

            if (arr.front() > arr[mid])
                end = mid;
            else
                str = mid + 1;
        }

        return end;
    }

    int bin_search(vector<int> arr, int s, int e, int target)
    {

        int str = s;
        int mid = 0;
        int end = e;

        while (str <= end)
        {

            mid = str + (end - str) / 2;

            if (arr[mid] < target)
                str = mid + 1;
            else if (target < arr[mid])
                end = mid - 1;
            else
                return mid;
        }

        return -1;
    }

    int search(vector<int> &nums, int target)
    {

        const int N = nums.size();
        if (N == 1)
            return nums.front() == target ? 0 : -1;

        int str = 0;
        int end = N - 1;
        int pivot = findMin(nums);

        if (nums.front() < target)
        {
            str = 1;
            if (pivot)
                end = pivot - 1;
        }

        else if (target < nums.front())
        {
            str = pivot;
        }

        else
        {
            return 0;
        }

        return bin_search(nums, str, end, target);
    }
};