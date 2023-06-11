class Solution
{
public:
    int peakIndexInMountainArray(vector<int> &arr)
    {

        int str = 0;
        int end = arr.size() - 1;
        int ans = -1;

        while (str < end)
        {
            int mid = str + (end - str) / 2;
            cout << " START " << str << " MID " << arr[mid] << " END " << end << '\n';

            if (arr[str] > arr[str + 1])
                return str;
            else if (arr[end - 1] < arr[end])
                return end;
            else
            {
                if (arr[mid - 1] < arr[mid])
                {
                    if (arr[mid] > arr[mid + 1])
                        return mid;
                    else
                        str = mid + 1;
                }

                else
                    end = mid - 1;
            }

            cout << " START " << str << " MID " << arr[mid] << " END " << end << '\n';
        }

        return ans;
    }
};