#include<iostream>
using namespace std;

 int getPivot(int arr[],int n)
{
    int low=0;
    int high = n-1;
    while (low<=high){
        int mid=low+(high-low)/2;
        int next=(mid+1+n)%n;
        int previous=(mid-1+n)%n;
    if(arr[mid]<arr[next]&& arr[mid]<arr[previous])
    {
        return mid;
    }
    else if(arr[low]<=arr[high])
    {
        return low;
    }
    else if(arr[mid]>=arr[low]){
        low=mid+1;
    }
    else if(arr[mid]<=arr[high]){
        high=mid-1;
    }
    
}
return -1;
}

int binarySearch(int arr[],int n,int key,int pivot)
{
    int start = pivot;
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

int binary_Search(int arr[],int key,int pivot)
{
    int start = 0;
    int end = pivot-1;

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
int main()
{
int arr[7]={5 ,8, 9, 10, 1, 3, 4};
int key =4;
int pivot = getPivot(arr,7);
int left=binarySearch(arr,7,key,pivot);
int right=binary_Search(arr,key,pivot);
if(left!=-1)
{
    cout<<left;
}
else if(right!=-1)
{
    cout<<right;
}
else if(left==-1&&right==-1)
{
    cout<<"-1";
}
return 0;
}