#include<iostream>
using namespace std;

int infinite_sorted(int arr[] ,  int key)
{
    int s=0;
    int e=1;
    int ans=-1;
   
    while (s<=e)
    {
       if(arr[s]==key)
       {
        return s;
       }
       if(arr[e]==key)
       {
        return e;
       }
       if(key>arr[e])
       {
        s=e;
        e=e*2;
       }
       else if(key<arr[e])
       {
         int mid=s+(e-s)/2;
         if(arr[mid]==key)
         {
            return mid;
         }
         else if(arr[mid]<key)
         {
            s=mid+1;
         }
         else if(arr[mid]>key)
         {
            e=mid-1;
         }
       }

    }
    return ans;
    
}
int main(){
int arr[9]={1,2,3,4,8,10,10,12,19};
int ans=infinite_sorted(arr,9,12);
cout<<"ANSWER IS "<<ans;
return 0;
}
