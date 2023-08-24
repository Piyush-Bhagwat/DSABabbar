#include <iostream>
using namespace std;

int binarySearch(int ar[],int size, int key){

    int startIndex = 0;
    int endIndex = size-1;

    while(startIndex <= endIndex){

        // int midIndex = (startIndex+endIndex)/2; // this is not optimal for larger valuse as it can lead to overflow of int 
        int midIndex = startIndex + (endIndex - startIndex)/2;

        int midElement = ar[midIndex];

        if(midElement == key){
            return midIndex;
        }
        else if (midElement > key) { //if kiy is small then search teh left part of array
            endIndex = midIndex-1;
        } 
        else { //if key is greater then search the right part of array
            startIndex = midIndex+1; 
        }
    }

    return -1;
}

main(){
    int ar[] = {2, 4, 7, 18};
    int key = 18;

    cout<<"Binary Search: "<<binarySearch(ar, 4, key);
}