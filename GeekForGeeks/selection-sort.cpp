class Solution
{
public:
    void insert(int arr[], int i)
    {
        int temp = 0;
        for (int a = 0; a < i; a++)
        {
            if (arr[i] < arr[a])
            {
                for (int b = a; b < i; b++)
                {
                    temp = arr[i];
                    arr[i] = arr[b];
                    arr[b] = temp;
                }
                return;
            }
        }
        return;
    }

public:
    // Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        for (int i = 1; i < n; i++)
        {
            insert(arr, i);
        }
    }
};