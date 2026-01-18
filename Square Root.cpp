#include <bits/stdc++.h>
using namespace std;
//optimized approach 
class Solution {
  public:
    int floorSqrt(int n) {
        int s=1;
        int e=n;
        int ans=1;
        int mid;
        
        while(s<=e){
             mid = s+(e-s)/2;
            
            if(mid*mid<=n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        
        return ans;
    }
};

int main() {
    int n;
    cout << "Enter number";
    cin >> n;
    Solution obj;
    int result = obj.floorSqrt(n);
    cout << "Square root of n : " << result << endl;

    return 0;
}
