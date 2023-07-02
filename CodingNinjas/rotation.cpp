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

int findKRotation(vector<int> &arr)
{
    return findMin(arr);
}