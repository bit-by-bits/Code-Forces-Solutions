class Solution
{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m)
    {

        int row = 0;
        int col = m - 1;

        pair<int, int> ans = {-1, 0};
        while (col > -1 && row < n)
        {

            if (arr[row][col])
            {
                if (ans.second != col)
                    ans = {row, col};

                if (!col)
                    return row;
                else if (arr[row][col - 1])
                    col--;
                else
                    row++;
            }

            else
                row++;
        }

        return ans.first;
    }
};
