class Solution
{
public:
    int print2largest(int arr[], int n)
    {
        pair<int, int> largest = make_pair(-1, -1);

        for (int i = 0; i < n; i++)
        {
            if (arr[i] > largest.first)
            {
                largest = make_pair(arr[i], largest.first);
            }

            else if (arr[i] < largest.first && arr[i] > largest.second)
            {
                largest = make_pair(largest.first, arr[i]);
            }
        }

        return largest.second;
    }
};