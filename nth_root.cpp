#include <bits/stdc++.h>
using namespace std;
//optimized approach 
class Solution {
  public:
  long long check(long long mid, int n, int m) {
    long long res = 1;
    for(int i = 0; i < n; i++) {
        res *= mid;
        if(res > m) return res; // stop early
    }
    return res;
}

    int nthRoot(int n, int m) {
        // Code here
      
         int l=0;
         int h=m;
         int ans=-1;
         
         while(l<=h){
           int mid = l+(h-l)/2;
           long long val = check(mid,n,m);
           if(val==m){
              return mid;
            //   l=mid+1;
            }
            else if(val<m){
                 l=mid+1;
            }
            else{
                h=mid-1;
            }
         }
      return ans;
       
    
    }
};


int main() {
    int n,m;
    cout << "Enter numbers";
    cin >> n;
    cin>>m;
    Solution obj;
    int result = obj.nthRoot(n,m);
    cout << "Square root of n : " << result << endl;

    return 0;
}
