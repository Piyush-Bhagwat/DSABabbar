#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int peakElement(int ar[], int size)
{
    int startIdx = 0;
    int endIdx = size - 1;

    while (startIdx < endIdx)
    {
        int midIdx = startIdx + (endIdx - startIdx) / 2;

        int curEle = ar[midIdx];
        int nextEle = ar[midIdx + 1];

        if (curEle < nextEle)
        {
            startIdx = midIdx + 1;
        }
        else
        {
            endIdx = midIdx;
        }
    }
    return startIdx;
}

main()
{
    int ar[] = {1, 2, 3};
    int n = 3;

    cout << peakElement(ar, n);
    return 0;
}