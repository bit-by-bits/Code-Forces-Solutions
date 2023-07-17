class StockSpanner
{
private:
    vector<int> stocks;
    stack<pair<int, int>> stk;

public:
    StockSpanner() {}

    int next(int price)
    {

        int last = -1;
        int N = stocks.size();

        stocks.push_back(price);
        while (stk.size() && price >= stk.top().first)
            stk.pop();
        last = stk.size() ? stk.top().second : -1;

        stk.push({price, N});
        return (N - last);
    }
};