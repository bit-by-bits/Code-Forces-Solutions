typedef pair<int, int> pi;

vector<float> sjf(int n, vector<int> &arrivalTime, vector<int> &burstTime)
{
    int N = arrivalTime.size();

    vector<pi> store;
    priority_queue<pi, vector<pi>, greater<pi>> pq;

    for (int i = 0; i < N; i++)
        store.push_back({arrivalTime[i], burstTime[i]});
    sort(store.begin(), store.end());

    int i = 0;
    int comp = 0;

    float wait = 0;
    float turn = 0;

    while (i < n)
    {
        if (pq.empty())
            comp = max(store[i].first, comp), pq.push({store[i].second, store[i].first});
        else if (comp >= store[i].first)
            pq.push({store[i].second, store[i].first});
        else
        {
            auto job = pq.top();
            pq.pop();
            wait += (comp - job.second);
            comp = (comp + job.first);
            turn += (comp - job.second);
            i--;
        }

        i++;
    }

    while (pq.size())
    {
        auto job = pq.top();
        pq.pop();
        wait += (comp - job.second);
        comp = (comp + job.first);
        turn += (comp - job.second);
    }

    return {wait / N, turn / N};
}