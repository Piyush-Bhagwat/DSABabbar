#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int leftCount(int ar[], int n, int key){
    int s = 0;
    int e = n-1;
    int count = 0;
    
    while(s<=e){
        int m = s + (e-s)/2;
        
        if(ar[m] == key){
            count++;
            e = m-1;
        } 
        else if( key > ar[m]){
            s = m+1;
        }
        else{
            e = m-1;
        }
    }
    return count;
}

int rightCount(int ar[], int n, int key){
    int s = 0;
    int e = n-1;
    int count = 0;
    
    while(s<=e){
        int m = s + (e-s)/2;
        
        if(ar[m] == key){
            count++;
            s = m+1;
        } 
        else if(key > ar[m]){
            s = m+1;
        }
        else{
            e = m-1;
        }
    }
    return count;
}

int countOccurences(int ar[], int size, int key){
    return leftCount(ar, size, key) + rightCount(ar, size, key);
}

main()
{   
    int arr[] = {1, 2, 2, 2, 2, 3, 4, 5};
    int n = 8;

    cout<<countOccurences(arr, n, 2);
    return 0;
}