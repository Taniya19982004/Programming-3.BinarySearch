#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        // your code here
        int n=mat.size();
        int m=mat[0].size();
        
        int i=0;
        int j=m-1;
        
        while(j>=0 && i<n){
            if(mat[i][j]<x){
                i++;
            }
            else if(mat[i][j]>x){
                j--;
            }
            else if(mat[i][j]==x){
                return true;
            }
        }
        return false;
    }
};
int main() {
   
    cout<<"Enter the size of the array in n*m";
    int n,m;
    cin >> n;
    cin>>m;

    cout<<"Enter the elements in the array";
   vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }

    }
    int x;
    cout<<"enter the lement you want to search";
    cin>>x;
    
    Solution obj;
    bool result = obj.matSearch(arr,x);

    cout << result ;

    return 0;
}
