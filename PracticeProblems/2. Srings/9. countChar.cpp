#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<char> countChar(string s){
    map<char, int> mp;
    vector<char> ans;

    for(char i : s){
        mp[i]++;
    }

    for(auto m : mp){
        ans.push_back(m.first);
        int count = m.second;
        
        if(count==1) continue;

        if(count < 10){
            ans.push_back(count + '0');
        } else {
            while(count > 0){
                ans.push_back(count)
            }
        }
    }

    cout<<endl;

    return ans;
}

main()
{
    string s = "aabbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbbcccd";

    vector<char> v = countChar(s);

    for(char i : v) cout<<i<<", ";
    return 0;
}