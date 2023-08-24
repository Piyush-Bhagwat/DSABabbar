#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string removeSubstring(string s, string k){
    int n = s.length();
    int m = k.length();

    if(m > n) return s;

    while(s.length() >= 0 && s.find(k) < s.length()){
        s.erase(s.find(k), k.length());
    }

    return s;
}


main()
{
    string s = "daabcbaabcbc";
    string k = "abc";


    cout<<removeSubstring(s, k);
    // cout<<k.find("b");
    
    return 0;
}