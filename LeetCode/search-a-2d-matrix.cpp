class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        const int M = matrix.size();
        const int N = matrix[0].size();
        cout << "M:" << M << " N:" << N << endl;

        int row = -1;

        int str = 0;
        int end = M - 1;
        int mid = 0;

        if (M == 1)
            row = 0;
        else
        {
            while (str < end)
            {

                cout << str << ' ' << matrix[mid][0] << ' ' << end << endl;

                mid = str + (end - str + 1) / 2;
                if (matrix[mid][0] > target)
                    end = mid - 1;
                else
                    str = mid;
            }

            row = str;
        }

        str = 0;
        end = N - 1;
        mid = str + (end - str) / 2;

        cout << "\n"
             << row << "\n\n";

        if (N == 1)
            return matrix[row][0] == target;
        else
        {
            while (str < end)
            {

                cout << str << ' ' << matrix[row][mid] << ' ' << end << endl;

                mid = str + (end - str + 1) / 2;
                if (matrix[row][mid] > target)
                    end = mid - 1;
                else if (target > matrix[row][mid])
                    str = mid;
                else
                    return true;
            }

            return (matrix[row][str] == target);
        }
    }
};