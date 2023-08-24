#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubbleSwap(vector<int> &v){
    int n = v.size();
    int i = 0;

    while(i<n){
        for(int j=1; j<n-i; j++){
            if(v[j-1] > v[j]){
                swap(v[j], v[j-1]);
            }
        }
        i++;
    }
}

main()
{
    vector<int> v = {3, 8, 10, 7};

    bubbleSwap(v);

    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}