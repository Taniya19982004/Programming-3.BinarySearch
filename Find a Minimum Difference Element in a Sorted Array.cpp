#include<iostream>
using namespace std;

int minimum_difference_element(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==key)
        {
            return key;
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
    int m=arr[s]-key;
    int o=arr[e]-key;
    if(o<m)
    {
        return arr[e];
    }
    else if(m<o)
    {
        return arr[s];
    }
    return -1;

}

int main(){
int  arr[9]={1,2,3,4,5,7,8,9,10};


int ans= minimum_difference_element( arr,9, 6);
cout<<"minimum difference element is "<<ans<<endl;
return 0;
}