class Solution
{
public:
    int maxScore(vector<int> &pts, int k)
    {

        int N = pts.size();

        int left = N - k;
        int right = N;

        int sum = 0;
        for (int i = left; i < right; i++)
            sum += pts[i];

        int ans = sum;
        for (int i = 0; i < k; i++)
        {

            sum -= pts[left++ % N];
            sum += pts[right++ % N];

            ans = max(ans, sum);
        }

        return ans;
    }
};