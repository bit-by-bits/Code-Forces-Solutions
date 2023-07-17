class Solution
{
public:
    string removeKdigits(string num, int k)
    {

        int N = num.size();

        stack<int> smol;
        vector<int> nse(N);

        for (int i = N - 1; i > -1; i--)
        {
            while (smol.size() && num[smol.top()] >= num[i])
                smol.pop();
            nse[i] = smol.size() ? smol.top() : i;
            smol.push(i);
        }

        int idx = 0;
        int left = N - k;

        string ans = "";
        while (left)
        {

            int min = INT_MAX;
            for (int j = idx; j < N;)
            {

                int temp = num[j] - '0';
                if (temp < min && N - j >= left)
                {
                    min = num[j] - temp;
                    idx = j;
                }

                if (nse[j] == j)
                    break;
                else
                    j = nse[j];
            }

            ans += num[idx++];
            left--;
        }

        idx = 0;
        while (ans[idx] == '0')
            idx++;
        ans = ans.substr(idx);

        return ans == "" ? "0" : ans;
    }
};