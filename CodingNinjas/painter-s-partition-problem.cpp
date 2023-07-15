bool valid(vector<int> arr, int k, int mid)
{

    int N = arr.size();
    int curr = 0, ans = 1;

    for (int i = 0; i < N; i++)
    {

        if (arr[i] > mid)
            return false;

        if (curr + arr[i] > mid)
        {

            ans++;
            curr = arr[i];

            if (ans > k)
            {
                return false;
            }
        }

        else
        {
            curr += arr[i];
        }
    }

    return true;
}

int findLargestMinDistance(vector<int> &boards, int k)
{

    int str = 0;
    int end = accumulate(boards.begin(), boards.end(), 0);

    int res = -1;
    while (str <= end)
    {

        int mid = str + (end - str) / 2;
        int result = valid(boards, k, mid);

        if (result)
        {
            res = mid;
            end = mid - 1;
        }

        else
            str = mid + 1;
    }

    return res;
}