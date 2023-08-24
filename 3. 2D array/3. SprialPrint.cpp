#include<iostream>
#include<bits/stdc++.h>
using namespace std;

 vector<int> spirallyTraverse(vector<vector<int> > ar, int r, int c) 
    {
        int top = 0, bottom = r-1;
        int left = 0, right = c-1;
        vector<int> ans;
        
        while(top<=bottom && left<=right){
            for(int i=left; i<=right; i++){ //left -> right @ top
                ans.push_back(ar[top][i]);
            } top++;
            
            for(int i=top; i<=bottom; i++){//top -> bottom @ right
                ans.push_back(ar[i][right]);
            } right--;
            
            if(top <= bottom){
                for(int i=right; i>=left; i--){
                    ans.push_back(ar[bottom][i]);
                }
                bottom--;
            }
            
            if(left <= right){
                for(int i=bottom; i>= top; i--){
                    ans.push_back(ar[i][left]);
                }
                left++;
            }
        }
        
        return ans;
    }

main()
{
    vector<vector<int>> v = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

    vector<int> s = spirallyTraverse(v, 4, 4);
    for(int i: s) cout<<i<<" ";
    return 0;
}