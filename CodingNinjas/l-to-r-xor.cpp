int findXOR(int L, int R)
{

    int a = 0;
    int b = 0;

    switch ((L - 1) % 4)
    {
    case 0:
        a = L - 1;
        break;
    case 1:
        a = 1;
        break;
    case 2:
        a = L;
        break;
    case 3:
        a = 0;
        break;
    }

    switch (R % 4)
    {
    case 0:
        b = R;
        break;
    case 1:
        b = 1;
        break;
    case 2:
        b = R + 1;
        break;
    case 3:
        b = 0;
        break;
    }

    return a ^ b;
}