class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {

        int ans = 0;
        int i = 0, j = 0;
        int N = fruits.size();

        pair<int, int> one = {-1, -1};
        pair<int, int> two = {-1, -1};

        while (j < N)
        {

            if (fruits[j] == one.first)
            {
                one.second = j++;
            }

            else if (fruits[j] == two.first)
            {
                two.second = j++;
            }

            else
            {

                if (one.second < two.second)
                {
                    i = one.second + 1;
                    one = {fruits[j], j++};
                }

                else
                {
                    i = two.second + 1;
                    two = {fruits[j], j++};
                }
            }

            ans = max(ans, j - i);
        }

        return ans;
    }
};