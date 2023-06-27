#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;

    int str = 0;
    string newNum = to_string(num);
    int end = newNum.size() - 1;

    while (str < end)
    {
        if (newNum[str] != newNum[end])
        {
            cout << "false";
            return 0;
        }

        str++;
        end--;
    }

    cout << "true";
    return 0;
}
