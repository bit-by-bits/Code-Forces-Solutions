class Solution
{
public:
    string minWindow(string s, string t)
    {

        unordered_map<char, int> sm;
        unordered_map<char, int> tm;
        for (char c : t)
            tm[c]++;

        int N = s.size();
        int K = tm.size();

        int count = 0;
        int i = 0, j = 0;
        int str = 0, end = s.size();

        while (j < N)
        {

            while (j < N && count < K)
            {
                char c = s[j++];
                if (tm[c] && ++sm[c] == tm[c])
                    count++;
            }

            if (count == K)
            {
                while (i < j && count == K)
                {
                    char c = s[i++];
                    if (sm[c] && --sm[c] < tm[c])
                        count--;
                }

                if (j - i < end - str)
                    str = i, end = j;
            }
        }

        return str == 0 ? "" : s.substr(str - 1, end - str + 1);
    }
};