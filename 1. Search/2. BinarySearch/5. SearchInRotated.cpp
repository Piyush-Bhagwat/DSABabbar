#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int binarySearch(int ar[], int s, int e, int key)
{
    int startIdx = s;
    int endIdx = e;

    while (startIdx <= endIdx)
    {
        int midIdx = startIdx + (endIdx - startIdx) / 2;
        int midEle = ar[midIdx];

        if (midEle == key)
        {
            return midIdx;
        }
        else if (key < midEle)
        {
            endIdx = midIdx - 1;
        }
        else
        {
            startIdx = midIdx + 1;
        }
    }

    return -1;
}

int pivotIndex(int ar[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        int mid = start + (end - start) / 2;
        int midEle = ar[mid];

        if (ar[0] < midEle)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
    }

    return start;
}

int rotatedSearch(int arr[], int size, int key)
{
    int pivot = pivotIndex(arr, size);
    cout<<"pivot: "<<pivot<<endl;

    if (arr[pivot] <= key && key <= arr[size - 1])
    {// search on line 2
        return binarySearch(arr, pivot, size - 1, key);
    }
    else
    { //search on line 1
        return binarySearch(arr, 0, pivot - 1, key);
    }
}

main()
{
    int arr[] = {7, 8, 9, 1, 3, 5};
    int size = 6;
    int key = 9;

    cout<<rotatedSearch(arr, size, key);
    return 0;
}