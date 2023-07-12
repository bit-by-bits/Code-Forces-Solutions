class Solution
{
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int> newArr;

        int i1 = 0, i2 = 0;
        if (arr1[i1] < arr2[i2])
        {
            newArr.push_back(arr1[i1++]);
        }
        else
        {
            newArr.push_back(arr2[i2++]);
        }

        int temp = 0;
        while (true)
        {
            temp = newArr.back();

            while (arr1[i1] == temp)
                i1++;
            while (arr2[i2] == temp)
                i2++;
            if (!(i1 < n && i2 < m))
                break;

            if (arr1[i1] < arr2[i2])
                newArr.push_back(arr1[i1++]);
            else
                newArr.push_back(arr2[i2++]);
        }

        while (i1 < n)
        {
            if (arr1[i1] != newArr.back())
            {
                newArr.push_back(arr1[i1]);
            }

            i1++;
        }

        while (i2 < m)
        {
            if (arr2[i2] != newArr.back())
            {
                newArr.push_back(arr2[i2]);
            }

            i2++;
        }

        return newArr;
    }
};