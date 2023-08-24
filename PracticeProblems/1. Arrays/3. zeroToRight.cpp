#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void moveZero(vector<int> &ar)
{
    int n = ar.size();

    int placeIdx = 0;
    int i = 0;

    while (i < n)
    {
        if (ar[i] != 0)
        {
            swap(ar[placeIdx], ar[i]);
            placeIdx++;
        }

        i++;
    }
}

main()
{
    vector<int> v = {3, 5, 0, 0, 4, 0, 2, 0, 0, 1};
    vector<int> v2 = {3, 5, 4, 2, 1};
    vector<int> v3 = {0, 0, 0, 0, 0};

    moveZero(v3);

    for (int i : v3)
        cout << i << " ";
    return 0;
}