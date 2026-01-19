#include <bits/stdc++.h>
using namespace std;
//optimized approach 
class Solution {
public:
bool possible(vector<int>& arr, int days,int capacity){
    int sum=0;
    int cnt=1;
    for(int i=0;i<arr.size();i++){

        
        // if(arr[i]>capacity) return false;
        sum=sum+arr[i];
        if(sum>capacity){
            cnt++;
            sum=arr[i];
           
        }
    }

    return cnt<=days;
}
    int shipWithinDays(vector<int>& arr, int days) {
        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }
        int s=*max_element(arr.begin(),arr.end());
        int e = sum;
        int ans =0;

        while(s<=e){
            int mid = s+(e-s)/2;
            
            if(possible(arr,days,mid)){
                // cout<<mid;
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
        
    }
};
int main() {
    int n,m;
    cout << "Enter numbers of days";
    cin >> n;
     cout << "Enter size of array";
    cin>>m;
    Solution obj;
    vector<int>arr(m);
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }
    int result = obj.shipWithinDays(arr,n);
    cout << "ship within days" << result << endl;

    return 0;
}
