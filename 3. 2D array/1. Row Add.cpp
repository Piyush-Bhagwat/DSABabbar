#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rowSum(int ar[3][3]){
    for(int i=0; i<3; i++){
        int sum = 0;
        for(int j=0; j<3; j++){
            sum += ar[i][j];
        }

        cout<<sum<<" ";
    }
}

main()
{
    int ar[3][3] = {{1, 2, 3}, {1, 2, 6}, {9, 5, 3}};

    rowSum(ar);
    return 0;
}