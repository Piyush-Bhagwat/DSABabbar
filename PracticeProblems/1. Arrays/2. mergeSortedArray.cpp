#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> ar1, vector<int> ar2){
    int n = ar1.size();
    int m = ar2.size();

    int i = 0;
    int j =0;
    vector<int> sorted;

    while(i<n && j<m){
        if(ar1[i] < ar2[j]){
            sorted.push_back(ar1[i]);
            i++;
        } else {
            sorted.push_back(ar2[j]);
            j++;
        }

    }

    if(i == n){
        while(j<m){
            sorted.push_back(ar2[j]);
            j++;
        }
    }
    else if(j == m){
        while(i<n){
            sorted.push_back(ar1[i]);
            i++;
        }
    }

    sorted.shrink_to_fit();
    
    return sorted;
}

main()
{
    vector<int> a = {1, 4, 5, 7};
    vector<int> b = {2, 3, 8, 17};

    vector<int> sorted = merge(a, b);

    for(int i:sorted) cout<<i<<" ";
    return 0;
}