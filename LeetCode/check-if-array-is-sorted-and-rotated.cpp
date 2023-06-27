class Solution
{
public:
    bool check(vector<int> &arr)
    {

        bool rotated = false;
        const int SIZE = arr.size() - 1;

        for (int i = 0; i < SIZE; i++)
        {
            if (arr[i + 1] < arr[i])
            {
                if (!rotated && arr[SIZE] <= arr[0])
                {
                    rotated = true;
                }

                else
                {
                    return false;
                }
            }
        }

        return true;
    }
};