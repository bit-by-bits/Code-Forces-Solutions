class Solution
{
public:
    double myPow(double x, int n)
    {

        if (n < 0)
            x = 1 / x;

        double pow = 1;
        long num = labs(n);

        while (num)
        {
            if (num & 1)
                pow *= x;

            x *= x;
            num >>= 1;
        }

        return pow;
    }
};

// class Solution
// {
// public:
//     double myPow(double x, int n)
//     {

//         if (!n)
//         {
//             return 1;
//         }

//         else if (n > 0)
//         {
//             if (n & 1)
//                 return x * myPow(x * x, n / 2);
//             else
//                 return myPow(x * x, n / 2);
//         }

//         else
//         {
//             if (n == INT_MIN)
//                 return 1.0 / x * myPow(x, INT_MAX);
//             else
//                 return 1.0 / myPow(x, -n);
//         }
//     }
// };