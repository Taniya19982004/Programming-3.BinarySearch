#include <bits/stdc++.h>
using namespace std;

bool solve(int arr[], int n, int k, int maxx){
    int sum = 0;
    int student = 1;
    for(int i = 0; i < n; i++){
        sum += arr[i];
        if(sum > maxx){
            student++;
            sum = arr[i];
        }
    }
    return student <= k;
}

int findPages(int arr[], int n, int m) {
    if(n < m) return -1;

    int start = *max_element(arr, arr + n);
    int end = 0;
    for(int i = 0; i < n; i++) end += arr[i];

    int ans = -1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(solve(arr, n, m, mid)){
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, m;
    cout << "Enter number of books: ";
    cin >> n;

    int arr[n];
    cout << "Enter pages in each book:\n";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Enter number of students: ";
    cin >> m;

    int result = findPages(arr, n, m);
    cout << "Minimum maximum pages allocated: " << result << endl;

    return 0;
}
