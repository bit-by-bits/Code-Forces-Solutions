class Solution
{
public:
    vector<int> asteroidCollision(vector<int> &asteroids)
    {

        stack<int> stk;
        for (int x : asteroids)
        {
            if (x < 0)
            {

                while (stk.size() && stk.top() > 0 && stk.top() < -x)
                    stk.pop();

                if (stk.empty())
                {
                    stk.push(x);
                }
                else
                {
                    if (stk.top() == -x)
                        stk.pop();
                    else if (stk.top() < -x)
                        stk.push(x);
                }
            }

            else
                stk.push(x);
        }

        int N = stk.size();
        vector<int> ans(N, 0);
        for (int i = N - 1; i > -1; i--)
        {
            ans[i] = stk.top();
            stk.pop();
        }

        return ans;
    }
};