int maximumMeetings(vector<int> &start, vector<int> &end)
{
    int n = start.size();
    vector<pair<int, int>> meetings;

    for (int i = 0; i < n; i++)
        meetings.push_back({end[i], start[i]});

    sort(meetings.begin(), meetings.end());

    int maxm = 1;
    int prev = meetings[0].first;

    for (int i = 1; i < n; i++)
        if (prev < meetings[i].second)
            maxm++, prev = meetings[i].first;

    return maxm;
}