#include <vector>
#include <unordered_map>

int getLongestZeroSumSubarrayLength(vector<int> &arr)
{

    int SIZE = arr.size();
    unordered_map<int, int> store;

    int sum = 0, ans = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += arr[i];

        if (store[sum])
            ans = max(ans, i - store[sum] + 1);
        else
            store[sum] = i + 1;
    }

    return ans;
}