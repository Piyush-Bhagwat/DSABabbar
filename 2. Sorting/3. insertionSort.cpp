#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &ar){
    int n = ar.size();

    for(int i=1; i<n; i++){
        int curEle = ar[i];

        for(int j = i-1; j>=0; j--){
            if(ar[j]>curEle){ //swap untill ar[i] is not smaller than curEle
                swap(ar[j], ar[j+1]);
            } else {
                break;
            }
        }
    }
}

main()
{
    vector<int> v= {4, 1, 3, 9, 7};
    insertionSort(v);
    for(int i : v) cout<<i<<' ';
    return 0;
}