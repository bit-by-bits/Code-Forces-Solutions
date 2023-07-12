class Solution
{
public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        if (low < high)
        {
            int q = partition(arr, low, high);

            quickSort(arr, low, q);
            quickSort(arr, q + 1, high);
        }
    }

public:
    int partition(int arr[], int low, int high)
    {
        int i = low;
        int j = high;
        int pivot = arr[low];

        while (1)
        {
            while (arr[i] < pivot)
            {
                i++;
            }
            while (arr[j] > pivot)
            {
                j--;
            }

            if (i >= j)
                return j;
            swap(arr[i], arr[j]);
        }

        return j;
    }
};