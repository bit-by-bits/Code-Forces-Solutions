class Solution
{
public:
    vector<int> searchRange(vector<int> &arr, int key)
    {
        int start = 0, end = arr.size() - 1;
        vector<int> ans(2, -1);

        if (arr.empty() || key < arr[start] || arr[end] < key)
            return ans;

        while (start < end)
        {
            int mid = (start + end) / 2;

            if (arr[mid] > key)
                end = mid - 1;
            else if (arr[mid] < key)
                start = mid + 1;
            else
                end = mid;

            cout << " KEY " << key << " START " << start << " MID " << arr[mid] << " END " << end << '\n';
        }

        ans[0] = end;
        start = 0;
        end = arr.size() - 1;

        while (start < end)
        {
            int mid = (start + end + 1) / 2;

            if (arr[mid] > key)
                end = mid - 1;
            else if (arr[mid] < key)
                start = mid + 1;
            else
                start = mid;
            cout << " KEY " << key << " START " << start << " MID " << arr[mid] << " END " << end << '\n';
        }

        ans[1] = start;

        if (arr[ans[0]] != key || arr[ans[1]] != key)
            ans = {-1, -1};
        return ans;
    }
};