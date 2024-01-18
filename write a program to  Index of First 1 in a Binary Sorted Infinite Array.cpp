#include<iostream>
using namespace std;

 int firstOcc(int arr[],int key)
 {
   int s=0;
   int e=1;
   int ans=-1;
   while (arr[e]<key)
   {
      s=e;
      e=e*2;
   }
   while (s<=e)
   {
      int mid=s+(e-s)/2;
      if(arr[mid]==key)
      {
         ans=mid;
         e=mid-1;
      }
      if(arr[mid]<key)
      {
         s=mid+1;
      }
      else if(arr[mid]>key)
      {
         e=mid-1;
      }
   }
   return ans;

 }
  
    
int main(){
 int key=1;
 int arr[7]={1,1,1,1,1,1,1};
  cout<<"First occurence of 1 is at index "<<firstOcc(arr,key)<<endl;

return 0;
}