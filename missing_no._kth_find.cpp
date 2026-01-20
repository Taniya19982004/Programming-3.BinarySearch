#include <bits/stdc++.h>
using namespace std;
//optimized approach 
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int s = 0;
        int e = arr.size()-1;
        int mid;
        while(s<=e){
             mid=s+(e-s)/2;
            int missing =  arr[mid]-(mid+1);
            if(missing<k){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return k+e+1;
    }
};
int main() {
    int n,m;
    cout << "Enter the size of the array";
    cin >> m;
     cout << "Enter the missing position";
    cin>>n;
    Solution obj;
    vector<int>arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int result = obj.findKthPositive(arr,n);
    cout << n<<"th missing no. is  " << result << endl;

    return 0;
}
