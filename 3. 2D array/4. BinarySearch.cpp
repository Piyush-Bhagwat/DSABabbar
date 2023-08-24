#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool binarySearch(vector<vector<int>> ar, int key){
    int row = ar.size();
    int col = ar[0].size();

    int start = 0;
    int end = row*col - 1;  //as total elemets will be row x col

    while(start <= end){
        int mid = start + (end - start)/2;

        int curElement = ar[mid/col][mid%col];

        if(curElement == key){
            return 1;
        } 

        if(curElement > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return 0;
}

main()
{
    vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    cout<<binarySearch(v, 40);
    return 0;
}