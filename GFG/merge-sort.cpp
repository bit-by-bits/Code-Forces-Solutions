class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        vector<int> newArray;

        int str1 = l;
        int str2 = m;

        while (str1 < m && str2 <= r)
        {
            if (arr[str2] < arr[str1])
            {
                newArray.push_back(arr[str2++]);
            }

            else
            {
                newArray.push_back(arr[str1++]);
            }
        }

        if (str1 < m)
        {
            for (int i = str1; i < m; i++)
            {
                newArray.push_back(arr[i]);
            }
        }

        if (str2 <= r)
        {
            for (int i = str2; i <= r; i++)
            {
                newArray.push_back(arr[i]);
            }
        }

        for (int i = l; i <= r; i++)
        {
            arr[i] = newArray[i - l];
        }

        return;
    }

public:
    void mergeSort(int arr[], int l, int r)
    {
        if (l < r)
        {
            int mid = ceil(l + (r - l) / 2.0);
            mergeSort(arr, l, mid - 1);
            mergeSort(arr, mid, r);

            merge(arr, l, mid, r);
        }
    }
};