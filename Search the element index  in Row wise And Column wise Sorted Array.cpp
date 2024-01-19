#include<bits/stdc++.h>
using namespace std;

pair<int, int> sorted_array(int arr[][4], int row, int column , int key)
{
    int i=0;
    int j=column-1;
    while(i>=0 && i<row && j>=0 && j<column)
    {
      if(arr[i][j]==key)
      {
        return make_pair(i,j);
      }
      else if (arr[i][j]>key)
      {
        j--;
      }
      else if (arr[i][j]<key)
      {
        i++;
      }
    }
    return make_pair(-1, -1);
}
int main(){
int arr[4][4]={{10,20,30,40},
               {15,25,35,45},
               {27,29,37,45},
               {32,33,39,50}};
int key=29;
pair<int, int>ans=sorted_array(arr,4,4,key);
if (ans.first != -1 && ans.second != -1) {
    cout << "Key found at index: (" << ans.first << ", " << ans.second << ")" << endl;
} else {
    cout << "Key not found in the array" << endl;
}


return 0;
}