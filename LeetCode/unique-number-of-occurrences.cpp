class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        vector<pair<int, int>> v;

        bool ans = true;
        for (int i = 0; i < arr.size(); i++)
        {
            bool temp = false;
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j].first == arr[i])
                {
                    v[j].second++;
                    temp = true;
                    break;
                }
            }

            if (!temp)
            {
                v.push_back(make_pair(arr[i], 1));
            }
        }

        sort(v.begin(), v.end(), [](auto a, auto b)
             { return a.second > b.second; });

        for (int j = 1; j < v.size(); j++)
        {
            if (v[j].second == v[j - 1].second)
            {
                ans = false;
                break;
            }
        }

        return ans;
    }
};