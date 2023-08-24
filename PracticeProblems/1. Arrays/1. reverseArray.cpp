#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &ar){
    int s = 0;
    int e = ar.size()-1;

    while(s<=e){
        swap(ar[s],ar[e]);
        s++; e--;
    }
}

main()
{
    vector<int> v = {1, 2, 3, 4, 5}; 

    reverseArray(v);

    for(int i:v) cout<<i<<' ';
    return 0;
}