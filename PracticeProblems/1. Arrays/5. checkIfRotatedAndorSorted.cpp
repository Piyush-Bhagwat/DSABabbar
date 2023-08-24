#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool checkIfRotated(vector<int> ar){
    
    int flag = 0;

    for(int i=1; i<ar.size(); i++){
        if(ar[i-1] > ar[i]){
            flag++;
        }
    }

    if(ar.front()>ar.back()){
        flag++;
    }

    return (flag <= 2);
}

main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    vector<int> v2 = {4, 5, 1, 2, 3};
    vector<int> v3 = {48, 85, 1, 42, 10};
    vector<int> v4 = {4, 3, 2, 1};

    cout<<checkIfRotated(v4);
    return 0;
}