
int findCelebrity(int n)
{

    vector<bool> verify(n, true);
    vector<vector<int>> check;

    for (int i = 0; i < n; i++)
    {
        vector<int> m(n, 0);
        check.push_back(m);
    }

    for (int i = 0; i < n; i++)
    {

        if (verify[i])
        {

            bool celeb = true;

            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if (!knows(j, i))
                    {
                        celeb = false;
                        break;
                    }
                    else
                    {
                        verify[j] = false;
                        check[j][i] = 1;
                    }
                }
            }

            if (celeb)
            {
                for (int j = 0; j < n; j++)
                {
                    if (i != j)
                    {
                        if (check[i][j] || knows(i, j))
                        {
                            celeb = false;
                            check[i][j] = 1;
                            break;
                        }
                    }
                }
            }

            if (celeb)
                return i;
        }
    }

    return -1;
}