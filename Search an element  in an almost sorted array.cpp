#include<iostream>
using namespace std;

int binarySearch(int arr[] , int n , int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(arr[mid-1]==key)
        {
            return mid-1;
        }
         if(arr[mid+1]==key)
        {
            return mid+1;
        }
          else if(arr[mid]<key)
        {
            s=mid+2;
        }
        else if(arr[mid]>key)
        {
            e=mid-2;
        }
       mid=s+(e-s)/2;
    }
    return ans;
    
}
int main(){
int arr[7]={10,3,40,20,50,80,70};
int ans=binarySearch(arr,7,40);
cout<<"ANSWER IS "<<ans;
return 0;
}