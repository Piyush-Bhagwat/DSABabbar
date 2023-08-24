#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &ar){
    for(int i=0; i<ar.size()-1; i++){
        int minIdx = i; //store id of minmun number next of ar[i]

        for(int j=i+1; j<ar.size(); j++){ //find that min num id
            if(ar[minIdx] > ar[j]){
                minIdx = j;
            }
        }
        
        swap(ar[i], ar[minIdx]); //then swaps them
    }
}


main()
{
    vector<int> v = {4, 1, 3, 9, 7};
    selectionSort(v);

    for(int i : v){
        cout<<i<<" ";
    }

    return 0;
}