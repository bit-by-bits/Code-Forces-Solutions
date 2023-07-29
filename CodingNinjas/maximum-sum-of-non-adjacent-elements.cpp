#include <bits/stdc++.h>

int rob(vector<int> nums)
{

    int N = nums.size();
    vector<int> valueTill(N, -1);

    valueTill[0] = nums[0];
    valueTill[1] = max(nums[0], nums[1]);

    for (int i = 2; i < N; i++)
    {
        valueTill[i] = max(valueTill[i - 2] + nums[i], valueTill[i - 1]);
    }

    return valueTill[N - 1];
}

int maximumNonAdjacentSum(vector<int> &nums)
{

    int N = nums.size();

    if (!N)
        return N;
    else if (N == 1)
        return nums[0];
    else
        return rob(nums);
}
