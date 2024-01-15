#include<iostream>
using namespace std;
int floor(int arr[] , int n , int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if(arr[mid]==key)
        {
            return arr[mid];
        }
        else if(arr[mid]<key)
        {
           ans=arr[mid];
           s=mid+1;
        }
        else if(arr[mid]>key)
        {
           e=mid-1;
        }
        
       mid=s+(e-s)/2;
    }
    return ans;
    
}
int main(){
int arr[9]={1,2,3,4,8,10,10,12,19};
int ans=floor(arr,9,5);
cout<<"ANSWER IS "<<ans;
return 0;
}

