int lowerBound(vector<int> arr, int n, int x)
{

    int str = 0;
    int end = arr.size() - 1;
    int mid = 0;

    while (str <= end)
    {
        mid = str + (end - str) / 2;

        if (arr[mid] < x)
            str = mid + 1;
        else if (x < arr[mid])
            end = mid - 1;
        else
            return mid;
    }

    return str;
}
