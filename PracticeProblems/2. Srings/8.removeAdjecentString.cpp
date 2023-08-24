#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string rremove(string s)
{
    int i = 0;

    while (s != "" && i < s.length() - 1)
    {
        // cout<<s[i];
        if (s[i] == s[i + 1])
        {
            s.erase(i, 2);
            cout << i << " " << s << " ";
            i = 0;
            continue;
        }
        i++;
    }
    cout << endl;

    return s;
}

main()
{
    string s = "gksforgeeks";

    // cout<<rremove(s);
    cout<<s.erase(7, 2);
    return 0;
}