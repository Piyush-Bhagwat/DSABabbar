// Euclid’s formula says gcd(a, b) = gcd(a-b, b) or gcd(a%b, b)

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int hcf(int a, int b)
{

    while (b > 0 && a > 0)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    if (a == 0)
    {
        return b;
    }
    else
    {
        return a;
    }
}

main()
{
    cout << hcf(0, 36);
    return 0;
}