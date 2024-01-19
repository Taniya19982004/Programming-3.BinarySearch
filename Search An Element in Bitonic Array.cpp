#include<bits/stdc++.h>
using namespace std;

int Peak_Index_Mountain_Array(int arr[],int n)  
{
    int s=0;
    int e=n-1;
    int mid = s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid = s+(e-s)/2;

    }
    return s;

} 
 int ascending_BS( int arr[],int peak,int key)     
{
    int start=0;
    int end=peak-1;

    int mid = start + (end - start)/2;
    while (start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start=mid + 1;
        }
        else
        {
            end = mid - 1;
        }

        mid =(start+end)/2;
    }
    return -1;
}

int descending_BS( int arr[],int peak,int n,int key)     
{
    int start=peak;
    int end = n-1;

    int mid = start + (end - start)/2;
    while (start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            end = mid - 1;
        }
        else
        {
           start=mid + 1;
        }

        mid =(start+end)/2;
    }
    return -1;
}

int main(){
 int arr[6]={1,3,8,12,4,2};
 int key = 4;
 int peak = Peak_Index_Mountain_Array(arr, 6);
 int as_bs =ascending_BS(arr,peak,key);
 int ds_bs= descending_BS( arr, peak,6, key);
 if(as_bs==-1)
 {
    cout<<"Element in bitonic array is at index "<<ds_bs<<endl;
 }
else if(ds_bs==-1)
{
    cout<<"Element in bitonic array is at index "<<as_bs<<endl;
}
return 0;
} 