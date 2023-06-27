#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    cin >> num;

    string tempStr = to_string(num);
    const int SIZE = tempStr.size();

    int ans = 0;
    int curr = '0';
    int tempInt = 1;
    for (int i = 0; i < SIZE; i++)
    {

        tempInt = 1;
        curr = tempStr[i] - '0';
        for (int j = 0; j < SIZE; j++)
            tempInt *= curr;

        ans += tempInt;
    }

    cout << (ans == num ? "true" : "false");
    return 0;
}
