#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int s=0;
        int e=arr.size()-1;
        if(arr.size()-1==0){
            return 0;
        }
        while(s<=e){
            int mid = s+(e-s)/2;
            if(mid!=0 && mid!=arr.size()-1){
                if(arr[mid]>arr[mid-1] and arr[mid]>arr[mid+1]){
                    return mid;
                }
                else if(arr[mid-1]<arr[mid]){
                    s=mid+1;
                }
                else {
                    e=mid-1;
                }
            }
            else if(mid==0){
                if(arr[0]>arr[1]){
                    return 0;
                }
                else{
                    return 1;
                }
            }
            else if(mid==arr.size()-1){
                 if(arr[arr.size()-1]>arr[arr.size()-2]){
                    return arr.size()-1;
                 }
                 else{
                    return arr.size()-2;
                 }

            }
        }
        return 0;
    }
};
int main() {
   
    cout<<"Enter the size of the array ";
    int n;
    cin >> n;

    cout<<"Enter the elements in the array";
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    Solution obj;
    int result = obj.findPeakElement(arr);

    cout << result ;

    return 0;
}
