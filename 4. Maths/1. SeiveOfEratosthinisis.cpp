//used to find count of prime number from range [1, n]

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int seive(int n){
    vector<int> prime(n+1, true);
    int count = 0;
    
    prime[1] = false; //as 1 is not prime;

    for(int i=2; i*i<n; i++){ //checking upto sqrt(n) is enough

        if(prime[i]){ //only calculate if i is prime
            for(int j=i*2; j<n; j+=i){ //setting all the multiples of i as nonPrime
                prime[j] = false;
            }
        }
    } 

    for(int i=2; i<n; i++){
        if(prime[i]){
            count++;
        }
    }

    return count;
}

main()
{
    cout<<seive(10);
    return 0;
}