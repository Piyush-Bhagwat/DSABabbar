#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getPivotElement(int ar[], int size){
    int startIdx = 0;
    int endIdx = size-1;

    while(startIdx < endIdx){
        int midIdx = startIdx + (endIdx - startIdx)/2;

        if(ar[midIdx] > ar[0]){
            startIdx = midIdx +1;
        } else {
            endIdx = midIdx;
        }
    }

    return startIdx;
}

main()
{
    // int ar[] = {93, 2, 7, 10, 12, 13, 20, 28, 35, 37, 40, 41, 49, 50, 64, 65, 73, 76, 82, 90};
    // int n = 20;

    int ar[] = {3, 1, 2};
    int n = 3;

    cout<<getPivotElement(ar, n);

    return 0;
}