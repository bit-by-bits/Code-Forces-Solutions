pair<int, int> getFloorAndCeil(int arr[], int n, int x)
{
    sort(arr, arr + n);

    int str = 0;
    int end = n - 1;
    int mid = 0;

    while (str <= end)
    {
        mid = str + (end - str) / 2;

        if (arr[mid] < x)
            str = mid + 1;
        else if (x < arr[mid])
            end = mid - 1;
        else
            return {x, x};
    }

    int one = -1, two = -1;
    if (end > -1)
        one = arr[end];
    if (str < n)
        two = arr[str];

    return {one, two};
};