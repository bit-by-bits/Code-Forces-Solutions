int upperBound(vector<int> &arr, int x, int n)
{

    int str = 0;
    int end = arr.size() - 1;
    int mid = 0;

    while (str <= end)
    {
        mid = str + (end - str) / 2;

        if (x < arr[mid])
            end = mid - 1;
        else
            str = mid + 1;
    }

    if (arr[str] > x && arr[str - 1] <= x)
        return str;
    else
        return n;
}