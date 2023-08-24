#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverse(int ar[], int s, int e)
{
    while (s <= e)
    {
        int temp = ar[s];
        ar[s] = ar[e];
        ar[e] = temp;

        s++;
        e--;
    }
}

void rotateArr(int arr[], int d, int n)
{
    d = d % n;

    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}

main()
{
    int ar[] = {1, 2, 4, 5, 6};

    rotateArr(ar, 3, 5);

    for(int i:ar) cout<<i<<' ';
    return 0;
}