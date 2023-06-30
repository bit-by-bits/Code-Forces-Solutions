class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        ///// SOLUTION 1 /////

        // vector<pair<int, int>> minMax;
        // const int SIZE = prices.size();

        // minMax.push_back({0, prices[0]});

        // for (int i = 1; i < SIZE; i++) {
        //     minMax.push_back({0, min(minMax.back().second, prices[i])});
        // }

        // minMax[SIZE - 1].first = prices[SIZE - 1];
        // for (int i = SIZE - 2; i > -1; i--) {
        //     minMax[i].first = max(minMax[i + 1].first, prices[i]);
        // }

        // int ans = 0;
        // for (int i = 0; i < SIZE; i++) {
        //     ans = max(ans, minMax[i].first - minMax[i].second);
        // }

        ///// SOLUTION 2 /////

        // int minCurr = INT_MAX, ans = 0;
        // const int SIZE = prices.size() - 1;

        // int maxCurr[SIZE + 1];
        // maxCurr[SIZE] = prices[SIZE];

        // for (int i = SIZE - 1; i > -1; i--) {
        //     maxCurr[i] = max(maxCurr[i + 1], prices[i]);
        // }

        // for (int i = 0; i <= SIZE; i++) {
        //     minCurr = min(minCurr, prices[i]);
        //     ans = max(ans, maxCurr[i] - minCurr);
        // }

        // return ans;

        ///// SOLUTION 3 /////

        const int SIZE = prices.size();
        int maxPro = 0, minPrice = INT_MAX;

        for (int i = 0; i < SIZE; i++)
        {
            minPrice = min(minPrice, prices[i]);
            maxPro = max(maxPro, prices[i] - minPrice);
        }

        return maxPro;
    }
};