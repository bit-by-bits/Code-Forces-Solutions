#include <iostream>
using namespace std;

int main()
{
    int friends, bottle, litres, limes, slices, grams, nlitres, ngrams;
    cin >> friends >> bottle >> litres >> limes >> slices >> grams >> nlitres >> ngrams;

    cout << min(bottle * litres / nlitres, min(limes * slices, grams / ngrams)) / friends << endl;

    return 0;
}