#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void wavePrint(vector<vector<int>> ar){
    int n = ar.size();

    for(int i=0; i<n; i++){
        int m = ar[i].size();

        if(i%2 == 0){ //print downwards
            for(int j=0; j<m; j++){
                cout<<ar[i][j]<<" ";
            }
        } 
        else { //print upwards
            for(int j=m-1; j>=0; j--){
                cout<<ar[i][j]<<" ";
            }
        }
    }

    cout<<endl;
}

main()
{
    vector<vector<int>> ar = {{1,2,3}, {4, 5, 6}, {7, 8, 9}};

    wavePrint(ar);
    return 0;
}