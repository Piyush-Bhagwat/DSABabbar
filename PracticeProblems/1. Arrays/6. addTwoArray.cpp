#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> addTwoArray(vector<int> a, vector<int> b){
    int n = a.size();
    int m = b.size();

    int i=n-1, j=m-1;
    int carry = 0;
    vector<int> ans;

    while(i>=0 && j>=0){
        int temp = a[i] + b[j] + carry;

        ans.push_back(temp%10);
        carry = temp/10;

        i--;
        j--;
    }

    if(i<0){
        while(j>=0){
            ans.push_back(b[j] + carry);
            carry = 0;
            j--;
        }
    }

    if(j<0){
        while (i>=0)
        {
            ans.push_back(a[i] + carry);
            carry = 0;
            i--;
        }
        
    }

    if(carry) ans.push_back(carry);

    reverse(ans.begin(), ans.end());

    return ans;

}

main()
{
    vector<int> a = {9,9};
    vector<int> b = {1};

    vector<int> ans = addTwoArray(a, b);

    for(int i:ans) cout<<i;
    return 0;
}