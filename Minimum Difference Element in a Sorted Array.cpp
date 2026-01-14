#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());

        int s = 0;
        int e = arr.size() - 1;
        int floorVal = 0;
        int ceilVal = 0;

        while (s <= e) {
            int mid = s + (e - s) / 2;

            if (arr[mid] == x) {
                floorVal = x;
                ceilVal = x;
                break;
            }
            else if (arr[mid] < x) {
                floorVal = arr[mid];   // possible floor
                s = mid + 1;
            }
            else {
                ceilVal = arr[mid];    // possible ceil
                e = mid - 1;
            }
        }
        int floorVal1=floorVal-x;
        int ceilVal1= ceilVal-x;
         if(floorVal1< ceilVal1){
            return {floorVal};
         }else{
             return { ceilVal};
         }

       
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
    cout<<"Enter the element that you want to search";
    int x;
    cin >> x;

    Solution obj;
    vector<int> result = obj.getFloorAndCeil(x, arr);

    cout << result[0] ;

    return 0;
}
