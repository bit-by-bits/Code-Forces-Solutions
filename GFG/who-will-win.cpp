class Solution
{
public:
    // Function to find element in sorted array
    // arr: input array
    // N: size of array
    // K: element to be searche
    int searchInSorted(int arr[], int N, int K)
    {

        int str = 0;
        int end = N;
        int mid = 0;

        while (str <= end)
        {
            mid = str + (end - str) / 2;

            if (arr[mid] < K)
            {
                str = mid + 1;
            }

            else if (K < arr[mid])
            {
                end = mid - 1;
            }

            else
                return 1;
        }

        return -1;
    }
};