class Solution
{
public:
    long long int merge(long long arr[], long long s1, long long s2, long long e1, long long e2)
    {

        vector<long long int> temp;
        long long int i = s1, j = e1;
        long long int count = 0;

        while (i <= s2 && j <= e2)
        {
            if (arr[i] <= arr[j])
            {
                temp.push_back(arr[i++]);
            }

            else
            {
                temp.push_back(arr[j++]);
                count += (e1 - i);
            }
        }

        while (i <= s2)
        {
            temp.push_back(arr[i++]);
        }

        while (j <= e2)
        {
            temp.push_back(arr[j++]);
        }

        for (long long int k = s1; k <= e2; k++)
        {
            arr[k] = temp[k - s1];
        }

        return count;
    }

    long long int mergeSort(long long arr[], long long s, long long e)
    {

        if (s < e)
        {
            long long int mid = s + (e - s) / 2;

            long long int count = 0;
            count += mergeSort(arr, s, mid);
            count += mergeSort(arr, mid + 1, e);
            count += merge(arr, s, mid, mid + 1, e);
            return count;
        }

        return 0;
    }

    long long int inversionCount(long long arr[], long long N)
    {
        return mergeSort(arr, 0, N - 1);
    }
};