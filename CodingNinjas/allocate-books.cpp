bool check(vector<int> &arr, int n, int m, int num)
{
    int counter = 0;

    for (int i = 0; i < n;)
    {
        // cout << m << ' ' << counter << ' ' << arr[i] << "\n";

        if (num < (counter + arr[i]))
        {
            counter = 0;

            if (m == 1)
                return true;
            else
                m--;
        }

        else
        {
            counter += arr[i];
            i++;
        }
    }

    // cout << m << ' ' << counter << ' ' << 0 << "\n";
    return false;
}

int findPages(vector<int> &arr, int n, int m)
{

    if (m > n)
        return -1;

    int str = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);
    int mid = str + (end - str) / 2;

    while (str < end)
    {
        // cout << "--" << str << ' ' << mid << ' ' << end << "--\n";

        if (check(arr, n, m, mid))
            str = mid + 1;
        else
            end = mid - 1;

        mid = str + (end - str) / 2;
    }

    return check(arr, n, m, mid) ? ++mid : mid;
}
