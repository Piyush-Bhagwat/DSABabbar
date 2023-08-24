#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int findSquareRoot(int n){
    int start = 0;
    int end = n;
    int ans = 0;
    while(start<=end){
        int mid = start + (end-start)/2;

        if(mid*mid <= n){
            ans = mid;
            start = mid+1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}


main()
{
    cout<<findSquareRoot(25);
    return 0;
}