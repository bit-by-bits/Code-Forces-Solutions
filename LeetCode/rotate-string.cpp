class Solution
{
public:
    bool rotateString(string s, string goal)
    {

        int S = s.length(), G = goal.length();

        if (S != G)
            return false;

        goal += goal;
        for (int i = 0; i < G; i++)
        {
            if (goal.substr(i, G) == s)
                return true;
        }

        return false;
    }
};