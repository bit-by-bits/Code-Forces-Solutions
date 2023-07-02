class Solution
{
public:
    void trim(string &final)
    {

        while (final.front() == ' ')
            final.erase(final.begin());
        while (final.back() == ' ')
            final.pop_back();
    }

    string reverseWords(string s)
    {

        const int SIZE = s.length() - 1;
        int first = SIZE, last = SIZE;

        string temp = "", final = "";
        for (int i = SIZE; i > -1; i--)
        {

            if (s[i] == ' ')
            {
                temp = s.substr(first, last - first + 1);
                trim(temp);

                if (temp.length())
                    final += temp + " ";
                last = i - 1;
            }

            first = i;
        }

        final += s.substr(first, last - first + 1);
        trim(final);

        return final;
    }
};