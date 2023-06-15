class TimeMap
{
private:
    unordered_map<string, vector<pair<string, int>>> map;

    string searchVal(vector<pair<string, int>> &vec, const int &timestamp)
    {
        int str = 0;
        int end = vec.size() - 1;

        while (str <= end)
        {
            int mid = str + (end - str) / 2;

            if (vec[mid].second > timestamp)
                end = mid - 1;
            else if (vec[mid].second < timestamp)
                str = mid + 1;
            else
                return vec[mid].first;
        }

        return end >= 0 ? vec[end].first : "";
    }

public:
    TimeMap() {}

    void set(string key, string value, int timestamp)
    {
        map[key].push_back({value, timestamp});
    }

    string get(string key, int timestamp)
    {
        if (map.find(key) == map.end())
            return "";
        return searchVal(map[key], timestamp);
    }
};