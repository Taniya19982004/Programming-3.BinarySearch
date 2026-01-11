#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        sort(arr.begin(), arr.end());

        int s = 0;
        int e = arr.size() - 1;
        int floorVal = -1;
        int ceilVal = -1;

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

        return {floorVal, ceilVal};
    }
};

int main() {
    int x;
    cin >> x;

    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    vector<int> result = obj.getFloorAndCeil(x, arr);

    cout << result[0] << " " << result[1] << endl;

    return 0;
}
